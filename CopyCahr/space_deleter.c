#include <stdio.h>

/* замеяет стоящие подряд пробелы на обин пробел */
int main()
{
	int c;
	while((c = getchar()) != EOF) {
		if(c == ' ') {
			while((c = getchar()) == ' ')
				;
			putchar(' ');
		}
		putchar(c);
	}
}

