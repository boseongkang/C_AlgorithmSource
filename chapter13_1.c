#include <stdio.h>

int main() {
	//1,4,6,7,9 �� 3�� ������ �� ã��
	int a[5], min = 9, l = 0, m = 0;
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < 5; i++) {
		if (a[i] < 3) {
			l = 3 - a[i];
		}
		else
			l = a[i] - 3;
		if (l < min) {
			min = l;
			m = a[i];
		}
	}
	printf("3�� ������ �� : %d", m);
}
