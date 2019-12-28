#include <stdio.h>

int main() {
	int p = 0, q, a[6][6], i, j;
	for (i = 0; i <= 5; i++) {
		for (j = 0; j <= 5; j++) {
			a[i][j] = 0;
		}
	}
	do {
		p++;
		q = 0;
		do {
			q++;
			a[p][q] = q + 1;
		} while (q < p);
	} while (p < 5);
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			printf("%d ", a[i][j]);
		}
		puts("");
	}
}