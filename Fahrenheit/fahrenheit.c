#include <stdio.h>
int fahrenheit(int from, int to, int step);
/* печать таблцы температур по Фарингейту
и Цельсию для fahr = 0, 20, ..., 300 */

int main() {
	int lower, upper, step;

	lower = 0; /* нижняя граница таблицы температур*/
	upper = 200; /* верхняя граница */
	step = 20 ; /* шаг */

	fahrenheit(lower, upper, step);

	return 0;
}

int fahrenheit(int from, int to, int step) {
	float fahr, celsius;

	fahr = from;
	printf ("%4s%9s\n", "fahr", "celsius");
	while (fahr <= to) {
		celsius = 5.0/9.0 * (fahr - 32.0);
		printf ("%4.0f%7.1f\n", fahr, celsius);
		fahr = fahr + step;
		}
	return 0;
}

