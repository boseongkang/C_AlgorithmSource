#include <stdio.h>

int main() {
	int a[5][5], i, j, k = 0;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			k++;
			a[j][i] = k;
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (a[i][j] < 10)
				printf(" %d ", a[i][j]);

			else
				printf("%d ", a[i][j]);
		}
		puts("");
	}
}