#include <stdio.h>

int main() {
	int num = 0, a = 1,b=0,c=0;
	while (num <= 500) {
		num++;
		a = num % 6;
		b = num % 7;
		c = a + b;
		if (c == 0) {
			printf("%d\n", num);
		}
	}
}