#include <stdio.h>

unsigned rightrot(unsigned x, int n);

int main() {
	int n;
	unsigned x, result;

	printf("Enter the x: ");
	scanf("%u", &x);

	printf("Enter the n: ");
	scanf("%d", &n);

	result = rightrot(x, n);
	printf("Result = %u\n", result);

	return 0;
}

unsigned rightrot(unsigned x, int n) {
	int bits = sizeof(unsigned) * 8;
	unsigned mask = (1u << n) - 1;
	return (x >> n) | ((x & mask) << (bits - n));
}
