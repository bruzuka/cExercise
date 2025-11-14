#include <stdio.h>

/* программа печатающая гистограмму длин вводимых слов */
int main() {
	int i, z, l = 0;
	char c;
	int digits[20];

	/* Инициализация массива */
	for (i = 0; i < 20; ++i) {
		digits[i] = 0;
	}	
	
	/* Word frequency counting */
	while ((c = getchar()) != EOF) { // Reading chars
		if ((c >= '!' && c <= '~')) {
			l++;
		} else if ((c == ' ') || (c == '\n') ||(c == '\t')) {
			if (l > 0) {
				++digits[l];
				++digits[0];  // Counting all words
				l = 0;
			}
		}
	}
	
	// Total words in text
	printf("\nTotal words count: %d\n", digits[0]);

	// Printing gistogramm
	for (i = 1; i < 20; ++i) {
		if (digits[i] != 0) {
			printf("number of chars %d: count:%d: ", i, digits[i]);
			for (z = 0; z < digits[i]; ++z)
				printf("|"); 
			printf("\n");
		}
	}
}

