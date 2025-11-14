#include <stdio.h>

/* печать таблцы температур по Фарингейту
и Цельсию для celsius = 0, 20, ..., 300 */

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; /* нижняя граница таблицы температур*/
	upper = 300; /* верхняя граница */
	step = 20 ; /* шаг */

	celsius = lower;
	printf ("%7s%6s\n", "celsius", "fahr");
	while (celsius <= upper) {
		fahr = 9.0/5.0 * celsius + 32.0;
		printf ("%6.0f%8.1f\n", celsius, fahr);
		celsius = celsius + step;
		}
}
