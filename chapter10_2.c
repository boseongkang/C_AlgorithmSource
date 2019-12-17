#include <stdio.h>

int main() {
	int j[5], s = 0, min = 100;

	puts("숫자 5개 입력 : ");

	for (s = 0; s < 5; s++) {
		scanf_s("%d", &j[s]);
	}
	for (int i = 0; i < 5; i++) {
		if (j[i] < min) {
			min = j[i];
		}
	}
	printf("최소값 : %d", min);
}