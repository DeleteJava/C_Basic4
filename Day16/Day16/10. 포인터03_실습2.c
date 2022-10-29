#include <stdio.h>

int main(void) {
	int num1 = 10;
	int num2 = 15;
	// ※ 포인터는 변수의 형태가 달라진 것 뿐이며
	//   그 외의 코드는 건드리지 않습니다.
	int* pnum1 = &num1;
	int* pnum2 = &num2;
	printf("합연산 : %d\n", *pnum1 + *pnum2);
	printf("차연산 : %d\n", *pnum1 - *pnum2);
	printf("곱연산 : %d\n", *pnum1 * *pnum2);
	printf("나누기 : %.2f\n", *pnum1 / (double)*pnum2);
	return 0;
}