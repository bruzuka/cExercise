#include <stdio.h>

#define LOWER 0 /* нижняя граница таблицы */
#define UPPER 300 /* верхняя граница */
#define STEP 20 /* размер шага */

/* пеачать таблицы температур по Фаренгейту и Цельсию */
int main()
{
	int fahr;
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));

/* вывод температур в обратном порядке */
/*
	printf("\n");
	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
*/
}
