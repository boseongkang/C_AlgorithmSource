#include <stdio.h>

int main() {
	int score[5], grade[5], i, j;
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &score[i]);
		grade[i] = 1;
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (score[i] < score[j]) {
				grade[i]++;
			}
		}
	}
	puts(" 점수 석차 ");
	for (i = 0; i < 5; i++) {
		printf(" %d\t%d\n", score[i], grade[i]);
	}
}