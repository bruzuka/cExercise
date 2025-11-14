#include <stdio.h>

#define LEN_OF_STRING 20

int main() {
	int i = 0;
	char c;

	while ((c = getchar()) != EOF) {
		if (i == LEN_OF_STRING) {
			putchar('\n');
			i = 0;
		} else if (c == '\n') {
			i = 0;
		}
		putchar(c);
		i++;
	}
	return 0;
}
