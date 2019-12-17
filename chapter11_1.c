#include <stdio.h>

int main() {
	int i, j[5], min = 100, max = 0, sum = 0;

	puts("숫자5개 입력");

	for (i = 0; i < 5; i++) {
		scanf_s("%d", &j[i]);
	}
	for (int i = 0; i < 5; i++) {
		if (j[i] < min) {
			min = j[i];
		}
	}
	for (int i = 0; i < 5; i++) {
		if (j[i] > max) {
			max = j[i];
		}
	}
	sum = max + min;
	printf("최솟값 : %d , 최댓값 : %d\n", min, max);
	printf("최솟값 + 최댓값 : %d", sum);

}