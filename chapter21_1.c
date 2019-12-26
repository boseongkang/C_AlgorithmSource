#include <stdio.h>

int main() {
	int i, j, a[6][6], b[6][6], k = 0;

	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			a[i][j] = 0;
			b[i][j] = 0;

		}
	}
	for (i = 5; i >= 1; i--) {
		for (j = i; j <= 5; j++) {
			k++;
			a[i][j] = k;
		}
	}
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			if (a[i][j] < 10)
				printf(" %d ", a[i][j]);
			else
				printf("%d ", a[i][j]);
		}
		puts("");
	}
	puts("\n=====");
	for (i = 1; i <= 5; i++) {
		for (j = i; j<= 5; j++) {
			b[j][6 - i] = a[i][j];
		}
	}
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			if (b[i][j] < 10)
				printf(" %d ", b[i][j]);
			else
				printf("%d ", b[i][j]);
		}
		puts("");
	}
}