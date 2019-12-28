#include <stdio.h>

int main() {
	int sum = 0, a, b, c;
	scanf_s("%d %d", &a, &b);
	if (a > b) {
		for (c = b; c <= a; c += 2) {
			sum += c;
				printf("%d ", c);
		}
	}
	if (a < b) {
		for (c = a; c <= b; c += 2) {
			sum += c;
			printf("%d ", c);
		}
	}
	printf("%ÀÇ ÇÕ : %d\n", sum);
}