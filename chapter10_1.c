#include <stdio.h>

int main() {
	int j[5], s = 0, max = 0;
	puts("���� 5�� �Է� : ");
	for (s = 0; s < 5; s++) {
		scanf_s("%d", &j[s]);
	}
	for (int i = 0; i < 5; i++) {
		if (j[i] > max) {
			max = j[i];
		}
	}
	printf("�ִ� : %d", max);
}