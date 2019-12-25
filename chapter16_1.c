#include <stdio.h>

int main() {
	int A[5], i, j, temp;
	puts("값을 입력해주세요 : ");
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &A[i]);
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < i; j++) {
			if (A[j] > A[j + 1]) {
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}
	puts("정렬 된 결과 : ");
	for (i = 0; i < 5; i++) {
		printf("%d ", A[i]);
	}
}