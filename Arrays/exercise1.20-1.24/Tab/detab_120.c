#include <stdio.h>

#define TAB 4			/* count of SPACES in one TAB */

int main() {
	int i;
	char c;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			for (i = 0; i < TAB; ++i) {
				putchar(' ');
			}
		}
		putchar(c);
	}
	return 0;
}
