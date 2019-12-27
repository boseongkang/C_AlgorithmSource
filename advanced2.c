#include <stdio.h>

int main() {
	int r[6] = { 0 ,10,34,81,71,43 };
	int sum = 0, i = 0, max = 0, min = 100;
	float avg = 0.0;

	for (i = 1; i < 6; i++) {
		if (max < r[i])
			max = r[i];
		if (min > r[i])
			min = r[i];
		sum += r[i];
	}
	avg = sum / 5.;
	printf("ÃÖ´ñ°ª : %d, ÃÖ¼Ú°ª : %d, ÇÕ°è : %d, Æò±Õ : %.2f\n", max, min, sum, avg);
}