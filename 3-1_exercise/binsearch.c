#include <stdio.h>

#define LEN 10

int binsearch(int x, int v[], int n);

int main() {
	int list[LEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int x, answer;

	printf("Pritn number to search\n");
	scanf("%d", &x);
	answer = binsearch(x, list, LEN);
	printf("%d\n", answer);
	
	return 0;
}

int binsearch (int x, int v[], int n) {
	int low, high, mid;

	low = 0;
	high = n - 1;
	
	while (low <= high) {
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}

	if (v[high] == x)
		return high;
	return -1;
}
