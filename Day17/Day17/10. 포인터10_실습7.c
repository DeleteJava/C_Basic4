#include <stdio.h>
// 포인터가 사용될 경우, 형식은 의미가 없음
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