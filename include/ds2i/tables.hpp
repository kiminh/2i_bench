#pragma once

#if defined(_MSC_VER)
#define ALIGNED(x) __declspec(align(x))
#else
#if defined(__GNUC__)
#define ALIGNED(x) __attribute__((aligned(x)))
#endif
#endif

namespace ds2i {
namespace tables {

static const uint8_t delta_table2048[4096] ALIGNED(32) = {
    0,   0,  0, 1, 1,   4,  0, 1, 7,   8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 15,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    31,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 63,  11, 0, 1,
    6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 8,   8,  0, 1, 3,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 16,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 32,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    64,  11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 9,   8,  0, 1,
    3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 17,  9,  0, 1, 4,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 33,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 65,  11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    10,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 18,  9,  0, 1,
    4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 34,  10, 0, 1, 5,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 66,  11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 11,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    19,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 35,  10, 0, 1,
    5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 67,  11, 0, 1, 6,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 12,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 20,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    36,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 68,  11, 0, 1,
    6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 13,  8,  0, 1, 3,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 21,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 37,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    69,  11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 14,  8,  0, 1,
    3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 22,  9,  0, 1, 4,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 38,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 70,  11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    7,   8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 23,  9,  0, 1,
    4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 39,  10, 0, 1, 5,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 71,  11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 8,   8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    24,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 40,  10, 0, 1,
    5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 72,  11, 0, 1, 6,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 9,   8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 25,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    41,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 73,  11, 0, 1,
    6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 10,  8,  0, 1, 3,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 26,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 42,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    74,  11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 11,  8,  0, 1,
    3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 27,  9,  0, 1, 4,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 43,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 75,  11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    12,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 28,  9,  0, 1,
    4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 44,  10, 0, 1, 5,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 76,  11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 13,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    29,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 45,  10, 0, 1,
    5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 77,  11, 0, 1, 6,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 14,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 30,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    46,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 78,  11, 0, 1,
    6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 7,   8,  0, 1, 3,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 15,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 47,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    79,  11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 8,   8,  0, 1,
    3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 16,  9,  0, 1, 4,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 48,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 80,  11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    9,   8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 17,  9,  0, 1,
    4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 49,  10, 0, 1, 5,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 81,  11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 10,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    18,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 50,  10, 0, 1,
    5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 82,  11, 0, 1, 6,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 11,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 19,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    51,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 83,  11, 0, 1,
    6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 12,  8,  0, 1, 3,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 20,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 52,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    84,  11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 13,  8,  0, 1,
    3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 21,  9,  0, 1, 4,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 53,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 85,  11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    14,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 22,  9,  0, 1,
    4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 54,  10, 0, 1, 5,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 86,  11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 7,   8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    23,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 55,  10, 0, 1,
    5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 87,  11, 0, 1, 6,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 8,   8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 24,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    56,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 88,  11, 0, 1,
    6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 9,   8,  0, 1, 3,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 25,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 57,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    89,  11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 10,  8,  0, 1,
    3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 26,  9,  0, 1, 4,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 58,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 90,  11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    11,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 27,  9,  0, 1,
    4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 59,  10, 0, 1, 5,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 91,  11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 12,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    28,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 60,  10, 0, 1,
    5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 92,  11, 0, 1, 6,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 13,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 29,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    61,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 93,  11, 0, 1,
    6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 14,  8,  0, 1, 3,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 30,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 62,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    94,  11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 7,   8,  0, 1,
    3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 15,  9,  0, 1, 4,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 31,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 95,  11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    8,   8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 16,  9,  0, 1,
    4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 32,  10, 0, 1, 5,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 96,  11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 9,   8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    17,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 33,  10, 0, 1,
    5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 97,  11, 0, 1, 6,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 10,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 18,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    34,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 98,  11, 0, 1,
    6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 11,  8,  0, 1, 3,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 19,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 35,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    99,  11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 12,  8,  0, 1,
    3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 20,  9,  0, 1, 4,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 36,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 100, 11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    13,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 21,  9,  0, 1,
    4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 37,  10, 0, 1, 5,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 101, 11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 14,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    22,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 38,  10, 0, 1,
    5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 102, 11, 0, 1, 6,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 7,   8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 23,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    39,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 103, 11, 0, 1,
    6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 8,   8,  0, 1, 3,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 24,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 40,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    104, 11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 9,   8,  0, 1,
    3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 25,  9,  0, 1, 4,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 41,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 105, 11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    10,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 26,  9,  0, 1,
    4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 42,  10, 0, 1, 5,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 106, 11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 11,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    27,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 43,  10, 0, 1,
    5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 107, 11, 0, 1, 6,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 12,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 28,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    44,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 108, 11, 0, 1,
    6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 13,  8,  0, 1, 3,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 29,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 45,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    109, 11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 14,  8,  0, 1,
    3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 30,  9,  0, 1, 4,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 46,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 110, 11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    7,   8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 15,  9,  0, 1,
    4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 47,  10, 0, 1, 5,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 111, 11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 8,   8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    16,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 48,  10, 0, 1,
    5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 112, 11, 0, 1, 6,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 9,   8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 17,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    49,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 113, 11, 0, 1,
    6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 10,  8,  0, 1, 3,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 18,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 50,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    114, 11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 11,  8,  0, 1,
    3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 19,  9,  0, 1, 4,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 51,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 115, 11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    12,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 20,  9,  0, 1,
    4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 52,  10, 0, 1, 5,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 116, 11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 13,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    21,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 53,  10, 0, 1,
    5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 117, 11, 0, 1, 6,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 14,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 22,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    54,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 118, 11, 0, 1,
    6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 7,   8,  0, 1, 3,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 23,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 55,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    119, 11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 8,   8,  0, 1,
    3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 24,  9,  0, 1, 4,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 56,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 120, 11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    9,   8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 25,  9,  0, 1,
    4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 57,  10, 0, 1, 5,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 121, 11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 10,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    26,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 58,  10, 0, 1,
    5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 122, 11, 0, 1, 6,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 11,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 27,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    59,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 123, 11, 0, 1,
    6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 12,  8,  0, 1, 3,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 28,  9,  0, 1, 4,   5,  0, 1, 0,   0,  0, 1,
    1,   4,  0, 1, 60,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1,
    124, 11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 13,  8,  0, 1,
    3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 29,  9,  0, 1, 4,   5,  0, 1,
    0,   0,  0, 1, 1,   4,  0, 1, 61,  10, 0, 1, 5,   5,  0, 1, 0,   0,  0, 1,
    2,   4,  0, 1, 125, 11, 0, 1, 6,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1,
    14,  8,  0, 1, 3,   5,  0, 1, 0,   0,  0, 1, 2,   4,  0, 1, 30,  9,  0, 1,
    4,   5,  0, 1, 0,   0,  0, 1, 1,   4,  0, 1, 62,  10, 0, 1, 5,   5,  0, 1,
    0,   0,  0, 1, 2,   4,  0, 1, 126, 11, 0, 1, 6,   5,  0, 1};

}  // namespace tables
}  // namespace ds2i