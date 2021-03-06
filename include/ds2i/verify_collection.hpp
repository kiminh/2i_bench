#pragma once

#include <succinct/mapper.hpp>
#include "util.hpp"
#include "../external/s_indexes/include/util.hpp"
#include "../external/s_indexes/include/s_index.hpp"
#include "../external/s_indexes/include/enumerator.hpp"

namespace ds2i {

template <typename InputCollection>
void verify_collection(InputCollection const& input, const char* filename) {
    sliced::s_index index;
    index.mmap(filename);

    logger() << "Checking the written data, just to be extra safe..."
             << std::endl;
    size_t s = 0;
    for (auto seq : input) {
        if (seq.docs.size() > constants::min_size) {
            auto sequence = index[s];
            uint64_t size = sequence.cardinality();
            sliced::enumerator e;
            e.init(sequence, index.universe());
            if (size != seq.docs.size()) {
                logger() << "sequence " << s << " has wrong length! (got "
                         << size << " but expected " << seq.docs.size() << ")";
                exit(1);
            }

            for (size_t i = 0; i < size; ++i, e.next()) {
                uint64_t docid = *(seq.docs.begin() + i);
                if (docid != e.value()) {
                    logger()
                        << "docid in sequence " << s << " differs at position "
                        << i << "!" << std::endl;
                    logger() << "got " << e.value() << " but expected " << docid
                             << std::endl;
                    logger()
                        << "sequence length: " << seq.docs.size() << std::endl;

                    exit(1);
                }
            }

            s += 1;
            if (s % 10000 == 0) {
                logger() << "checked " << s << " sequences" << std::endl;
            }
        }
    }
    logger() << "checked " << s << " sequences" << std::endl;
    logger() << "Everything is OK!" << std::endl;
}

template <typename InputCollection, typename Collection>
void verify_collection(InputCollection const& input, const char* filename) {
    Collection coll;
    boost::iostreams::mapped_file_source m(filename);
    succinct::mapper::map(coll, m);

    logger() << "Checking the written data, just to be extra safe..."
             << std::endl;
    size_t s = 0;
    for (auto seq : input) {
        if (seq.docs.size() > constants::min_size) {
            auto e = coll[s];
            if (e.size() != seq.docs.size()) {
                logger() << "sequence " << s << " has wrong length! ("
                         << e.size() << " != " << seq.docs.size() << ")";
                exit(1);
            }

            for (size_t i = 0; i < e.size(); ++i, e.next()) {
                uint64_t docid = *(seq.docs.begin() + i);
                uint64_t freq = *(seq.freqs.begin() + i);

                if (docid != e.docid()) {
                    logger()
                        << "docid in sequence " << s << " differs at position "
                        << i << "!" << std::endl;
                    logger() << "got " << e.docid() << " but expected " << docid
                             << std::endl;
                    logger()
                        << "sequence length: " << seq.docs.size() << std::endl;

                    exit(1);
                }

                if (freq != e.freq()) {
                    logger()
                        << "freq in sequence " << s << " differs at position "
                        << i << "!" << std::endl;
                    logger() << e.freq() << " != " << freq << std::endl;
                    logger()
                        << "sequence length: " << seq.docs.size() << std::endl;

                    exit(1);
                }
            }

            s += 1;
            if (s % 10000 == 0) {
                logger() << "checked " << s << " sequences" << std::endl;
            }
        }
    }
    logger() << "checked " << s << " sequences" << std::endl;
    logger() << "Everything is OK!" << std::endl;
}

}  // namespace ds2i
