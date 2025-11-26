#include <stdio.h>

#define LEN 100
char *squeeze(char s1[],char s2[]);

int main() {
    int i = 0;
    int word = 0;
    char c;
    char s1[LEN];
    char s2[LEN];
    

    while((c = getchar()) != EOF) {
        if(c != ' ' && c != '\t' && c != '\n') {
            if(word == 0)
                s1[i++] = c;
            else
                s2[i++] = c;
        } else{
            if(i != 0) {
                if (word == 0)
                    s1[i] = '\0';
                else
                    s2[i] = '\0';
                word++;
                i = 0;
            }
            if(word == 2) {
                char *result = squeeze(s1, s2);
                printf("%s\n", result);
                word = 0;
            }
        }
    }
    if (i > 0) {
        if (word ==0)
            s1[i] = '\0';
        else
            s2[i] = '\0';
        word++;
    }
    if (word == 2) {
        char *result = squeeze(s1, s2);
        printf("%s\n", result);
    }
    return 0;
}

char *squeeze(char s1[], char s2[]) {
    int i, j, k;
    char c;
    k = 0;

    for (i = 0; (c = s2[i]) != '\0'; i++) {
        int seen = 0;

        for (j = 0; j < k; j++) {
            if (s2[j] == c) {
                seen = 1;
                break;
            }
        }

        if (!seen) {
            s2[k++] = c;
        }
    }
    s2[k] = '\0';

    for (i = 0; s2[i] != '\0'; i++) {
        char remove_char = s2[i];

        k = 0;
        for (j = 0; s1[j] != '\0'; j++) {
            if (s1[j] != remove_char) {
                s1[k++] = s1[j];
            }
        }
        s1[k] = '\0';
    }
    return s1;
}
