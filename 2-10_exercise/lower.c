#include "stdio.h"

#define LEN 100

void lower(char word[]);

int main() {
	int i;
	char c;
	char word[LEN] = "";

	i = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (i > 0) {
				word[i] = '\0';
				lower(word);
				i = 0;
			}
		} else {
			word[i++] = c;	
		}
	}

	if (i > 0) {
		word[i] = '\0';
		lower(word);
	}
	
	return 0;
}

void lower(char word[]) {
	int i = 0;
	char c;	
	
	while ((c = word[i]) != '\0') {
		 word[i] = (c >= 65 && c <= 90) ? c + 32 : c;
		 i++;
	}
	printf("%s\n", word);
}
