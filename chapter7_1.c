#include <stdio.h>

int main() {
	int sum = 0,cnt=0;

	for (int i = 1; i <= 100; i++) {
		if (i % 5 == 0) {
			cnt++;
			sum += i;
		}
	}
	printf("���� : %d\n������ : %d", sum,cnt);
}