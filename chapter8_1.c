#include <stdio.h>

int main() {
	int i,j, A[100], num, L = 0;
	puts("���� : ");
	scanf_s("%d", &num);

	for (j = 1; j <= num; j++) {
		if (num % j == 0) {
			L++;
			A[L] = j;
		}
	}
	puts("��� : ");
	for (i = 1; i <= L; i++) {
		printf("%d��° : %d\n", i, A[i]);
	}


}