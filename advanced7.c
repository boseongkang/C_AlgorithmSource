#include <stdio.h>

int main() {
	int a = 1,b=1,t,h;
	t = a + b;
	printf("%d %d ", a, b);
	do {
		h = a + b;
		t = t + h;
		a = b;
		b = h;
		printf("%d ", b);
	} while (h < 34);
	printf(" = %d\n", t);
}