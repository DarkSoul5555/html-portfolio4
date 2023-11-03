//RA2211003011040  Assignment-5     Preprocessing    Question No: 5 

#include <stdio.h>

#pragma GCC optimize("O0") // Disable all optimizations for GCC

int divide(int a_1040, int b_1040) {
    return a_1040 / b_1040;
}

int main() {
    int result_1040;
    int numerator_1040 = 10;
    int denominator_1040 = 0;

    result_1040 = divide(numerator_1040, denominator_1040);

    printf("The result of division is: %d\n", result_1040);

    return 0;
}