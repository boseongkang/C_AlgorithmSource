#include <stdio.h>

int main() {
	int a[10], i, m = 0, l = 0, h = 9, k;
	puts("값을 입력해주세요 : ");
	for(i=0;i<10;i++){
		scanf_s("%d",&a[i]);
	}
	puts("찾을 값을 입력해주세요 : ");
	scanf_s("%d", &k);
	while (1) {
		if (l > h) {
			puts("찾는 값이 없어요.");
		}
		else {
			m = (int)((l + h) / 2);
			if (k == a[m]) {
				printf("찾는 값 : %d\n", a[m]);
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
