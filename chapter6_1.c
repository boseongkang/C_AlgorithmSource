#include <stdio.h>

int main() {
	int num, k, j, sum = 0;
	scanf_s("%d", &num);
	k = 2;

A:	while (k < num) {
		for (j = 2; j <= k; j++) {
		if (k % j == 0) {
			if (k == j) {
				printf("�Ҽ� :%d ", k);
				sum += k;
			}
			k++;
			goto A;
		}

	}
}
printf("\n �Ҽ��� �� : %d \n", sum);
}