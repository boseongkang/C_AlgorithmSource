#include <stdio.h>

int main() {
	int array[11] = {0, 5, 7, 3, 9, 1, 8, 3, 8, 11, 4};
	int h = 1, rest, even = 0, odd = 0;
	do {
		rest = array[h] % 2;
		if (rest == 0) {
			even += 1;

		}
		else {
			odd += 1;
		}
		h++;
	} while (h < 11);
	printf("number of evenNum : %d, number of oddNum : %d\n", even, odd);

}