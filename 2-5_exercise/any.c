#include <stdio.h>

#define LEN 100

int any(char s1[], char s2[]);

int main() {
    int i = 0;
    int word = 0;
    int result;
    char c;
    char s1[LEN];
    char s2[LEN];

    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n') {
            if (word == 0)
                s1[i++] = c;
            else
                s2[i++] = c;
        } else {
            if (i != 0) {
                if (word == 0)
                    s1[i] = '\0';
                else
                    s2[i] = '\0';
                word++;
                i = 0;
            }
            if (word == 2) {
                result = any(s1, s2);
                printf("%d\n", result);
                word = 0;
            }
        }
    }
    return 0;
}

int any(char s1[], char s2[]) {
    int i, j;
    char c1, c2;
    for (i = 0; (c1 = s2[i]) != '\0'; i++) {
        for (j = 0; (c2 = s1[j]) != '\0'; j++) {
            if (c1 == c2) {
                return j + 1;
            }
        }
    }
    
    return -1;
}
