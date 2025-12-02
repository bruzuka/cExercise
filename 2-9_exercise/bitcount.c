#include <stdio.h>

int bitcount(unsigned x);

int main() {
	int result;
	unsigned x;

	printf("Enter the x: ");
	scanf("%u", &x);

	result = bitcount(x);
	printf("Result = %d\n", result);

	return 0;
}

int bitcount(unsigned x) {
	int b;
	for (b = 0; x != 0; x &= (x - 1))
		b++;
	return b;
}
