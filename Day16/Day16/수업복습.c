#include <stdio.h>

int main(void)
{
	double farr[5] = { 0, };
	double* pfarr = farr;
	printf("�Ǽ��� 5�� �Է� >> ");
	scanf_s("%lf%lf%lf%lf%lf", &*pfarr, &*(pfarr+1), pfarr[2, pfarr[3], pfarr[4]);
	printf("����� �� : %.1f %.1f %.1f %.1f %.1f", pfarr[0], pfarr[1], pfarr[2], pfarr[3], pfarr[4]);



	return 0;
}