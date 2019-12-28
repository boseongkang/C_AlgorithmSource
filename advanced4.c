#include <stdio.h>

int main() {
	int p, q, a[6][6], i, j;
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			a[i][j] = 0;
		}
	}
	p = 1; q = 1;
	while (p < 6) {
		q = 1;
		while (q <= p) {
			a[p][q] = q;
			q = q + 1;
		}
		p = p + 1;
	}
	for (i = 1; i < 6; i++) {
		for (j = 1; j < 6; j++) {
			printf("%d ", a[i][j]);
		}
		puts("");
	}
}