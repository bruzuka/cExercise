#include <stdio.h>

#define TAB 4			/* count of SPACES in one TAB */

int main () {
	int s = 0;
	char c;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			s++;
			if (s == TAB) {
				putchar('\t');
				s = 0;
			}	
		} else {
			while (s > 0) {
				putchar(' ');
				s--;
			}
			putchar(c);
		}
	}

	while (s > 0) {
		putchar(' ');
		s--;
	}
	return 0;
}

