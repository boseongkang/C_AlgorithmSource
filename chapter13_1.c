#include <stdio.h>

int main() {
	//1,4,6,7,9 중 3에 근접한 수 찾기
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
	printf("3에 근접한 수 : %d", m);
}
