#include <stdio.h>

int main() {
	int sum = 0, a, b, num;
	scanf_s("%d %d", &a, &b);
	if (a > b) {
		for (num = b; num <= a; num++)
			sum += num;
	}
	else {
		for (num = a; num <= b; num++)
			sum += num;
	}
	printf("���������� ū �� ������ �� : %d\n", sum);                                                                                            
}