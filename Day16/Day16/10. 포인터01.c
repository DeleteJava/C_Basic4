#include <stdio.h>

int main(void) {
	// 포인터변수 : 변수를 올바르게 내가 원하는 시점에서 공유하기 위한 변수(기술)
	// - 같은 공간 내에서 안씀
	// - 사용처는 함수 / 동적할당을 위하여 사용한다.
	// 선언
	int num;
	int* pnum;
	// 초기화
	num = 10;
	pnum = &num; // 공유해서 사용할려는 대상변수
	// 값 불러오기
	printf("num : %d\n", num);
	printf("pnum : %d\n", pnum); // 값 불러오기
	// 사용1
	printf("result : %d\n", num + 5);
	printf("result : %d\n", *pnum); // 주소값을 이용해, 대상변수가 저장된 값을 불러온다
	// 사용2
	num = 15;
	printf("num : %d\n", num);
	printf("*pnum : %d\n", *pnum);
	*pnum = 20; // 주소값을 이용해, 대상변수가 저장한 값을 바꾼다.
	printf("num : %d\n", num);
	printf("*pnum : %d\n", *pnum);
	return 0;
}