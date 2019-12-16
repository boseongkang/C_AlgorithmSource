#include <stdio.h>

int main() {
	int A, B, Big, Small, NMG, GCM = 0;
	float LCM = 0;
	puts("숫자 2개 입력 : ");
	scanf_s("%d %d", &A, &B);
	if (A >= B) {
		Big = A;
		Small = B;
	}
	else {
		Big = B;
		Small = A;

	}
	while (1) {
		NMG = (Big % Small);
		if (NMG == 0) {
			GCM = Small;
			LCM = (float)((A * B) / GCM);
			goto Label;
		}
		else {
			Big = Small;
			Small = NMG;
		}
	}
Label:	puts("결과 : ");
	printf("최대 공약수 : %d\n최소공배수 : %0.f\n", GCM, LCM);

}