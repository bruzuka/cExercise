#include <stdio.h>

#define IN 1 /* состаяние при написании слов, для избежания множественного \n при чтении пробелов и табуляции */
#define OUT 0 /* состояние при пробелах и табуляции */
/* выводит полученное содержимое своего ввода, помещая по одному слову на каждой строке*/
int main() {
	int c, state;
	state = OUT;
	while ((c = getchar()) !=  EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (state == IN) {
				state = OUT;
				putchar('\n');
			}
		} else {
			if (state == OUT) {
				state = IN;
			}
			putchar(c);
		}
	}
}
