#include <stdio.h>

int main() {
	int num = 0, a = 0, b = 0, c = 0;
	while (num <= 100) {
		num++;
		a = num % 3;
		b = num % 5;
		c = a + b;
		if (c == 0) {
			printf("%d\n", num);
		}
	}
}