#include <stdio.h>

int main() {
	int num[10], i, j;
	for (i = 1; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			num[j] = i * j;
		
		printf("%d * %d = %d  ", i, j, i * j);
		}
		puts("");
	}
}