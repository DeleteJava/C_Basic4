#include <stdio.h>
// �����Ͱ� ���� ���, ������ �ǹ̰� ����
void init2var(int* pnum, double* pfnum) {
	*pnum = 10;
	*pfnum = 3.14;
}


int main(void) {
	int num;
	double fnum;
	init2var(&num, &fnum);
	printf("%d, %.2f\n", num, fnum);
	return 0;
}