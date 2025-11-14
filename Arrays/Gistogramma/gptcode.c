#include <stdio.h>

/* программа печатающая гистограмму длин вводимых слов */
int main(void) {
    int i, z, l = 0;
    char c;
    int digits[20];

    for (i = 0; i < 20; ++i) {
        digits[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= '!' && c <= '~') {
            l++;
        } else if (c == ' ' || c == '\n' || c == '\t') {
            if (l > 0) {
                ++digits[l];
                ++digits[0];
                l = 0;
            }
        }
    }

    for (i = 1; i < 20; ++i) {
        if (digits[i] != 0) {
            printf("number of chars %d: count:%d: ", i, digits[i]);
            for (z = 0; z < digits[i]; ++z)
                printf("|");
            printf("\n");
        }
    }

    printf("\nTotal words: %d\n", digits[0]);
}

