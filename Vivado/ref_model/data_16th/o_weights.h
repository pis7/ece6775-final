#include <stdint.h>
const float o_scale = 11.110462188721;
const uint8_t o_weights[24][96] = {
    {150, 105, 168, 165, 134, 164, 153, 102, 165, 82, 2, 85, 2, 86, 66, 150, 162, 81, 162, 82, 106, 101, 89, 86, 100, 4, 25, 21, 134, 161, 72, 144, 144, 154, 153, 21, 70, 40, 136, 102, 130, 154, 2, 37, 22, 96, 148, 33, 168, 130, 160, 168, 80, 152, 146, 153, 146, 73, 33, 169, 73, 105, 26, 81, 102, 42, 106, 106, 81, 41, 74, 106, 137, 37, 138, 164, 26, 25, 18, 166, 81, 100, 102, 42, 169, 104, 97, 81, 88, 154, 154, 166, 36, 25, 86, 64},
    {22, 86, 5, 26, 104, 84, 26, 85, 154, 101, 5, 82, 145, 16, 69, 21, 101, 5, 98, 149, 80, 129, 32, 105, 168, 97, 25, 18, 102, 134, 154, 85, 165, 85, 85, 85, 102, 136, 18, 70, 100, 100, 22, 97, 88, 86, 165, 102, 150, 97, 64, 70, 153, 152, 106, 68, 170, 0, 145, 144, 64, 73, 145, 18, 152, 148, 89, 17, 102, 104, 1, 2, 169, 104, 106, 74, 134, 96, 154, 33, 9, 149, 84, 18, 18, 89, 101, 129, 161, 37, 149, 148, 165, 146, 22, 162},
    {24, 86, 9, 65, 86, 74, 105, 134, 170, 132, 166, 24, 89, 33, 132, 154, 134, 134, 105, 9, 132, 22, 84, 164, 86, 105, 2, 86, 88, 169, 2, 132, 10, 169, 165, 33, 138, 85, 26, 97, 160, 170, 101, 168, 42, 38, 162, 82, 145, 90, 149, 64, 168, 144, 169, 164, 90, 145, 170, 160, 72, 152, 154, 21, 150, 102, 166, 69, 90, 129, 130, 152, 130, 166, 146, 26, 10, 137, 86, 165, 34, 24, 150, 164, 134, 37, 73, 150, 144, 90, 153, 90, 4, 21, 40, 132},
    {150, 170, 72, 33, 81, 40, 104, 73, 134, 73, 150, 165, 152, 134, 165, 68, 42, 145, 89, 166, 26, 169, 149, 84, 24, 40, 84, 90, 105, 169, 84, 132, 70, 130, 101, 8, 38, 36, 132, 168, 41, 89, 82, 81, 154, 85, 22, 38, 10, 33, 101, 152, 150, 152, 137, 33, 149, 26, 88, 169, 153, 24, 134, 138, 9, 42, 73, 101, 164, 101, 5, 81, 90, 161, 38, 9, 100, 26, 153, 98, 74, 105, 166, 149, 41, 24, 89, 130, 104, 86, 134, 34, 168, 106, 33, 145},
    {5, 21, 138, 136, 25, 164, 10, 169, 73, 89, 64, 38, 149, 165, 162, 97, 38, 148, 130, 132, 104, 68, 42, 165, 170, 26, 5, 165, 73, 88, 153, 161, 26, 106, 102, 18, 153, 38, 16, 152, 18, 74, 145, 161, 166, 136, 136, 161, 100, 25, 162, 166, 170, 32, 38, 145, 66, 133, 88, 165, 89, 34, 66, 6, 6, 84, 20, 98, 170, 85, 26, 88, 81, 106, 82, 138, 150, 38, 70, 170, 21, 74, 165, 74, 98, 166, 166, 85, 134, 64, 160, 164, 150, 89, 40, 20},
    {41, 160, 165, 105, 154, 104, 150, 160, 101, 0, 89, 102, 162, 137, 88, 74, 128, 136, 90, 0, 22, 74, 129, 132, 8, 134, 162, 165, 100, 25, 81, 166, 41, 88, 152, 89, 65, 161, 149, 105, 10, 152, 169, 26, 166, 102, 70, 40, 1, 33, 22, 5, 105, 17, 106, 144, 17, 81, 150, 4, 25, 85, 88, 66, 145, 82, 22, 21, 168, 168, 86, 128, 42, 154, 104, 84, 105, 146, 134, 9, 148, 20, 84, 80, 65, 25, 102, 10, 82, 37, 106, 153, 150, 161, 170, 33},
    {72, 102, 65, 166, 42, 162, 66, 145, 40, 148, 26, 26, 134, 37, 101, 65, 106, 165, 100, 145, 10, 148, 69, 150, 170, 165, 42, 150, 162, 85, 33, 5, 152, 85, 37, 37, 33, 137, 102, 10, 5, 82, 132, 84, 146, 90, 145, 80, 68, 161, 88, 41, 104, 129, 4, 82, 85, 161, 166, 38, 40, 154, 24, 129, 105, 148, 73, 150, 150, 165, 89, 146, 170, 10, 138, 161, 81, 73, 170, 97, 89, 145, 22, 96, 16, 21, 1, 162, 153, 68, 24, 106, 96, 150, 130, 80},
    {2, 106, 5, 36, 132, 154, 82, 100, 150, 20, 130, 105, 146, 86, 42, 0, 66, 86, 97, 133, 136, 38, 102, 81, 70, 102, 90, 38, 73, 152, 90, 165, 34, 146, 102, 144, 128, 98, 40, 0, 148, 20, 89, 38, 86, 105, 101, 10, 90, 105, 6, 138, 100, 80, 153, 72, 70, 38, 164, 169, 168, 149, 38, 170, 154, 166, 105, 165, 33, 42, 98, 106, 84, 165, 105, 144, 154, 89, 82, 9, 90, 42, 161, 105, 166, 85, 161, 129, 102, 18, 6, 144, 38, 105, 26, 130},
    {24, 133, 102, 134, 41, 97, 105, 2, 153, 150, 137, 169, 82, 148, 86, 153, 41, 98, 96, 26, 38, 86, 149, 165, 153, 165, 41, 170, 150, 80, 97, 84, 96, 102, 150, 105, 8, 82, 32, 89, 17, 170, 84, 149, 88, 102, 102, 98, 86, 169, 105, 148, 146, 5, 102, 42, 148, 149, 81, 152, 161, 17, 42, 150, 81, 26, 166, 150, 105, 165, 16, 81, 169, 150, 168, 106, 145, 9, 85, 2, 154, 106, 104, 170, 134, 84, 104, 66, 36, 20, 89, 74, 17, 106, 66, 22},
    {162, 162, 69, 161, 90, 24, 90, 137, 102, 101, 169, 97, 150, 74, 38, 153, 8, 162, 137, 90, 24, 100, 170, 134, 154, 4, 6, 145, 10, 69, 66, 98, 129, 80, 6, 130, 170, 106, 5, 136, 170, 149, 89, 20, 66, 104, 17, 73, 36, 40, 154, 138, 88, 89, 138, 153, 85, 145, 88, 101, 146, 144, 101, 148, 100, 42, 17, 145, 25, 24, 168, 153, 165, 165, 41, 70, 164, 70, 97, 6, 69, 25, 74, 69, 162, 166, 66, 102, 100, 149, 152, 138, 102, 72, 89, 65},
    {102, 101, 100, 137, 146, 81, 98, 4, 73, 42, 5, 160, 150, 66, 161, 90, 42, 72, 162, 154, 102, 98, 100, 1, 149, 9, 17, 170, 166, 10, 97, 146, 150, 162, 161, 22, 170, 1, 33, 21, 98, 89, 73, 100, 169, 84, 24, 134, 149, 129, 170, 97, 104, 36, 133, 22, 166, 105, 162, 154, 64, 37, 166, 166, 168, 98, 149, 149, 89, 74, 85, 40, 9, 69, 5, 168, 164, 97, 89, 82, 25, 145, 160, 134, 74, 138, 81, 150, 34, 81, 149, 128, 165, 65, 85, 21},
    {169, 166, 81, 150, 82, 165, 85, 6, 69, 96, 145, 38, 106, 102, 81, 4, 8, 137, 33, 84, 74, 97, 129, 4, 104, 84, 154, 154, 82, 145, 36, 25, 154, 1, 2, 154, 40, 169, 70, 74, 161, 69, 160, 101, 90, 72, 132, 21, 98, 38, 161, 73, 105, 128, 42, 84, 74, 169, 64, 2, 85, 85, 42, 40, 26, 69, 88, 138, 88, 130, 148, 161, 86, 85, 146, 4, 26, 170, 169, 152, 84, 168, 24, 73, 89, 105, 153, 34, 145, 81, 137, 102, 5, 81, 89, 106},
    {150, 165, 130, 98, 86, 82, 22, 22, 25, 104, 170, 18, 129, 37, 33, 6, 88, 38, 86, 102, 85, 134, 169, 85, 102, 90, 150, 90, 154, 164, 25, 74, 149, 20, 168, 2, 169, 40, 134, 98, 162, 2, 33, 98, 149, 85, 96, 10, 37, 164, 86, 154, 70, 106, 20, 5, 97, 85, 154, 100, 166, 21, 70, 168, 32, 74, 25, 84, 84, 6, 154, 2, 170, 33, 152, 22, 162, 88, 160, 5, 20, 89, 86, 134, 152, 22, 90, 168, 81, 148, 9, 85, 100, 101, 154, 88},
    {149, 152, 82, 105, 22, 128, 89, 166, 164, 85, 84, 41, 169, 150, 89, 101, 72, 138, 90, 164, 86, 82, 170, 132, 134, 90, 42, 130, 9, 150, 72, 145, 85, 145, 136, 149, 41, 88, 149, 136, 26, 66, 85, 84, 170, 69, 74, 146, 96, 69, 101, 22, 82, 149, 162, 68, 161, 8, 153, 96, 161, 162, 134, 32, 101, 89, 162, 81, 82, 102, 2, 73, 134, 69, 8, 161, 22, 144, 96, 32, 138, 17, 138, 10, 85, 81, 70, 106, 70, 24, 10, 161, 169, 161, 24, 26},
    {101, 150, 90, 166, 84, 90, 17, 136, 86, 146, 152, 166, 146, 165, 153, 132, 16, 154, 97, 168, 81, 85, 38, 80, 152, 25, 154, 149, 81, 16, 85, 40, 102, 160, 4, 32, 42, 90, 138, 129, 9, 64, 96, 65, 16, 105, 96, 129, 148, 9, 161, 38, 81, 18, 80, 74, 1, 32, 38, 146, 149, 40, 134, 106, 96, 70, 101, 22, 148, 32, 104, 101, 66, 145, 164, 37, 10, 80, 6, 129, 102, 25, 148, 102, 166, 97, 82, 73, 136, 88, 146, 153, 133, 154, 41, 5},
    {73, 69, 169, 41, 97, 154, 145, 162, 36, 101, 70, 89, 166, 98, 86, 38, 84, 102, 20, 84, 70, 128, 86, 85, 86, 0, 149, 106, 136, 10, 102, 86, 38, 145, 20, 150, 17, 21, 162, 128, 82, 106, 37, 168, 5, 153, 98, 104, 10, 165, 26, 146, 88, 72, 102, 154, 162, 149, 160, 102, 144, 34, 145, 149, 18, 166, 166, 164, 32, 72, 18, 90, 170, 153, 97, 6, 154, 74, 98, 2, 88, 80, 106, 106, 70, 100, 74, 166, 132, 25, 102, 154, 162, 5, 162, 136},
    {149, 18, 152, 72, 74, 102, 169, 133, 33, 148, 17, 89, 24, 38, 38, 69, 101, 70, 153, 149, 33, 130, 84, 153, 69, 73, 42, 154, 150, 25, 85, 166, 100, 1, 90, 70, 89, 22, 84, 72, 97, 65, 64, 66, 170, 41, 37, 38, 164, 101, 42, 164, 145, 33, 0, 86, 37, 133, 133, 106, 149, 137, 104, 102, 161, 168, 149, 86, 38, 98, 33, 4, 138, 81, 130, 100, 65, 65, 17, 40, 164, 132, 85, 42, 137, 104, 72, 106, 86, 38, 100, 41, 148, 154, 152, 40},
    {74, 98, 160, 134, 85, 169, 33, 137, 41, 145, 137, 5, 134, 86, 21, 36, 161, 89, 162, 104, 41, 97, 106, 98, 104, 22, 144, 72, 149, 74, 84, 89, 137, 136, 42, 88, 152, 40, 149, 106, 128, 169, 84, 73, 17, 42, 4, 73, 106, 85, 36, 36, 168, 166, 165, 169, 149, 133, 154, 18, 150, 98, 105, 104, 90, 24, 100, 90, 73, 166, 72, 22, 104, 134, 136, 68, 153, 162, 69, 0, 160, 86, 4, 90, 25, 146, 105, 86, 21, 130, 21, 130, 16, 130, 137, 9},
    {84, 22, 68, 6, 98, 5, 149, 169, 149, 96, 42, 21, 90, 145, 106, 41, 106, 82, 72, 102, 40, 154, 129, 10, 129, 6, 33, 88, 22, 22, 148, 42, 137, 85, 98, 89, 146, 74, 146, 24, 137, 138, 137, 130, 154, 74, 40, 168, 150, 0, 145, 89, 24, 70, 150, 66, 160, 137, 68, 154, 85, 166, 136, 96, 25, 42, 153, 162, 165, 82, 88, 162, 84, 90, 128, 68, 42, 152, 166, 8, 101, 84, 100, 166, 160, 102, 81, 26, 0, 6, 33, 170, 85, 160, 84, 70},
    {38, 90, 33, 65, 37, 70, 22, 86, 165, 154, 66, 85, 36, 144, 162, 145, 6, 96, 165, 5, 144, 160, 34, 33, 149, 164, 86, 169, 169, 6, 133, 73, 129, 100, 150, 170, 145, 41, 26, 80, 161, 81, 80, 105, 102, 25, 170, 169, 133, 70, 149, 153, 160, 68, 42, 98, 42, 36, 70, 152, 153, 85, 85, 137, 69, 16, 132, 80, 41, 136, 5, 138, 74, 170, 105, 145, 25, 41, 68, 153, 148, 37, 152, 154, 65, 74, 21, 89, 26, 162, 145, 73, 168, 162, 168, 37},
    {1, 144, 105, 25, 85, 33, 0, 153, 96, 134, 106, 164, 145, 69, 41, 82, 162, 89, 22, 145, 98, 88, 102, 38, 40, 33, 150, 137, 89, 68, 5, 105, 129, 102, 69, 105, 96, 86, 101, 89, 169, 66, 149, 64, 137, 84, 150, 101, 102, 85, 74, 69, 102, 132, 105, 166, 22, 100, 70, 153, 84, 149, 9, 69, 5, 133, 25, 72, 145, 66, 106, 65, 80, 104, 72, 41, 85, 105, 72, 162, 154, 89, 152, 168, 34, 164, 0, 129, 102, 22, 72, 102, 165, 166, 105, 154},
    {69, 104, 150, 86, 150, 80, 138, 90, 148, 136, 165, 105, 146, 0, 134, 89, 69, 68, 154, 137, 165, 21, 32, 40, 105, 96, 41, 166, 144, 106, 165, 1, 105, 41, 105, 6, 160, 22, 150, 5, 82, 42, 86, 100, 42, 86, 150, 0, 154, 164, 32, 34, 82, 85, 66, 6, 149, 130, 38, 85, 170, 89, 98, 65, 104, 9, 102, 22, 24, 105, 98, 170, 25, 166, 25, 18, 90, 102, 136, 97, 144, 105, 144, 129, 97, 137, 150, 4, 22, 89, 37, 10, 130, 160, 144, 82},
    {97, 134, 88, 38, 144, 5, 70, 169, 150, 106, 101, 90, 162, 68, 152, 162, 68, 6, 21, 37, 90, 160, 100, 137, 96, 170, 136, 5, 89, 98, 73, 136, 169, 36, 138, 169, 165, 64, 100, 34, 41, 137, 10, 160, 152, 86, 160, 25, 26, 70, 149, 98, 72, 104, 133, 166, 20, 37, 130, 164, 104, 152, 136, 129, 36, 90, 102, 1, 65, 101, 96, 168, 137, 168, 82, 101, 154, 65, 82, 169, 148, 20, 42, 38, 1, 145, 170, 146, 90, 165, 164, 97, 9, 81, 36, 154},
    {90, 165, 18, 138, 130, 64, 154, 26, 1, 74, 74, 32, 38, 138, 132, 74, 162, 169, 96, 6, 106, 150, 134, 138, 17, 146, 170, 161, 169, 33, 66, 74, 37, 36, 169, 84, 90, 0, 82, 138, 90, 97, 72, 84, 149, 82, 90, 161, 102, 150, 166, 170, 149, 164, 68, 165, 152, 24, 98, 80, 101, 170, 90, 74, 73, 4, 69, 86, 148, 6, 98, 65, 42, 138, 69, 65, 17, 73, 160, 21, 145, 97, 86, 152, 138, 105, 166, 137, 130, 100, 73, 22, 104, 74, 154, 34}
};