#include <stdio.h>

int main() {
    int a = 4, b = 5, c = 3, d = 2, e = 7, f = 8;
    int result;

    // A complex arithmetic expression with precedence and short-circuit evaluation
    result = (a++ * b-- + c++ - d++ || e-- + f-- % a) && (a * b - ++c + d % 2);

    printf("a = %d, b = %d, c = %d, d = %d, e = %d, f = %d\n", a, b, c, d, e, f);
    printf("result = %d\n", result);

    return 0;
}
