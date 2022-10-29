#include <stdio.h>

int main(void)
{
	double farr[5] = { 0, };
	double* pfarr = farr;
	printf("실수값 5개 입력 >> ");
	scanf_s("%lf%lf%lf%lf%lf", &*pfarr, &*(pfarr+1), pfarr[2, pfarr[3], pfarr[4]);
	printf("저장된 값 : %.1f %.1f %.1f %.1f %.1f", pfarr[0], pfarr[1], pfarr[2], pfarr[3], pfarr[4]);



	return 0;
}