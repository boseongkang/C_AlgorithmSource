#include <stdio.h>

int main() {
	int A, B, Big, Small, NMG, GCM = 0;
	float LCM = 0;
	puts("���� 2�� �Է� : ");
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
Label:	puts("��� : ");
	printf("�ִ� ����� : %d\n�ּҰ���� : %0.f\n", GCM, LCM);

}