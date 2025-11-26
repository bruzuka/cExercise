#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main() {
    unsigned x, y;
    int p, n;

    printf("x = ");
    scanf("%u", &x);

    printf("p = ");
    scanf("%d", &p);

    printf("n = ");
    scanf("%d", &n);

    printf("y = ");
    scanf("%u", &y);

    unsigned result = setbits(x, p, n, y);
    printf("result = %u\n", result);

    return 0;
}
unsigned setbits(unsigned x, int p, int n, unsigned y) {
    unsigned y_bits = y & ~(~0u << n);               // взять n младших бит из y
    unsigned insert = y_bits << (p + 1 - n);         // сдвинуть их на позицию p

    unsigned mask = ~(~0u << n) << (p + 1 - n);      // n единиц на позиции p
    unsigned cleared_x = x & ~mask;                  // очистить нужные биты в x

    return cleared_x | insert;     
}
