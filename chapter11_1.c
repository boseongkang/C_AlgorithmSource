#include <stdio.h>

int main() {
	int i, j[5], min = 100, max = 0, sum = 0;

	puts("����5�� �Է�");

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
	printf("�ּڰ� : %d , �ִ� : %d\n", min, max);
	printf("�ּڰ� + �ִ� : %d", sum);

}