#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main() {
	unsigned x, result;
	int p, n;

	printf("x = ");
	scanf("%u", &x);
	
	printf("p = ");
	scanf("%d", &p);
	
	printf("n = ");
	scanf("%d", &n);

	result = invert(x, p, n);
	printf("resutl = %u\n", result);
		
	return 0;
}                          

unsigned invert(unsigned x, int p, int n) {
	unsigned mask = ~(~0u << n) << (p + 1 - n);
		return x ^ mask;
}
