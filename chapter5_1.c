#include <stdio.h>

int main() {
	int num, j;
	int isPrime = 1;
	scanf_s("%d",&num);
	for (j = 2; j < num; j++) {
		if (num % j == 0) {
			isPrime = 0;
			break;
		}
	}
	if (isPrime) {
		puts("�Ҽ��̴�");
	}
	else
		puts("�Ҽ��� �ƴϴ�.");
}