#include <stdio.h>

int main() {
	int a[5][3], b[3][5], i, j, k = 0, l = 0, m = 0;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			k++;
			a[i][j] = k;
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			if (a[i][j] < 10)
				printf(" %d ", a[i][j]);
			else
				printf("%d ", a[i][j]);
		}
		puts("");
	}
	puts("");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			b[l][m] = a[i][j];
			m++;
			if (m >= 5) {
				l++;
				m = 0;
			}
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			if (b[i][j] < 10)
				printf(" %d ", b[i][j]);
			else
				printf("%d ", b[i][j]);
		}
		puts("");
	}

}