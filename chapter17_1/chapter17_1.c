#include <stdio.h>

int main() {
	int a[10], i, m = 0, l = 0, h = 9, k;
	puts("���� �Է����ּ��� : ");
	for(i=0;i<10;i++){
		scanf_s("%d",&a[i]);
	}
	puts("ã�� ���� �Է����ּ��� : ");
	scanf_s("%d", &k);
	while (1) {
		if (l > h) {
			puts("ã�� ���� �����.");
		}
		else {
			m = (int)((l + h) / 2);
			if (k == a[m]) {
				printf("ã�� �� : %d\n", a[m]);
				break;
			}
			else {
				if (k < a[m]) {
					h = m - 1;
				}
				else {
					l = m + 1;e
				}
			}
		}

	}
}
