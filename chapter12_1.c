#include <stdio.h>

int main() {
	int b[10], s = 0, d, quot = 0, remain;

	scanf_s("%d", &d);
	quot = (int)(d / 2);
	do {
		remain = d - quot * 2;
		printf("remainder: %d,quotient: %d \n", remain, quot);
		s++;
		b[s] = remain;
		d = quot;
		quot = (int)(d / 2);
	} while (quot != 0);
	remain = d - quot * 2;
	printf("remainder: %d, quotient: %d \n", remain, quot);
	s++;
	b[s] = remain;

	for (int i = s; i > 0; i--) {
		printf("%d ", b[i]);
		puts("");
	}
}