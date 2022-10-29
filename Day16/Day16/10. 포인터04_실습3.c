#include <stdio.h>

int main(void) {
	// ※ 포인터변수는 항상 참조연산(*)을 붙이고 쓰는 것이 기본이다.
	// - 단, 예외는 언제나 존재하니 조심할 것
	int num1 = 0;
	int num2 = 0;
	// & : 주소연산자. 대상 변수의 주소값을 끄집어낸다.

	int* pnum1 = &num1; // 값은 "봐봤자" 쓸모 없지만
	int* pnum2 = &num2; // 값은 "이용" 할 수 있다

	// 예외 : 포인터 변수를 거쳐서 저장하는 경우 * 안붙임.
	// 주의 : 포인터변수에 입력받아 저장안함.
	// -> &이 단독으로 붙지 않는다.
	printf("정수 2개 입력 >> ");
	scanf_s("%d%d", pnum1, pnum2);
	printf("합연산 : %d\n", *pnum1 + *pnum2);
	printf("두 정수의 평균 : %.2f\n", (*pnum1 + *pnum2) / 2.0);
	return 0;
}