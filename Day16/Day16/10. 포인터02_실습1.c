#include <stdio.h>

int mainEX(void) {
	int num; double fnum; char ch;
	// 실습1
	// 아래의 코드에서 변수를 이용하는 부분을
	// 모두 포인터변수로 바꿔주세요.
	// ※ 포인터변수의 자료형은 다루는 변수의 자료형* 형태로 일치시킵니다.
	// ※ 포인터변수는 p+대상변수명으로 해주는 편이 좋습니다.
	// ※ 잘못된 공간으로 매칭시키면 비정상적인 사용이 된다.
	int* pnum = &num;
	double* pfnum = &fnum;
	char* pch = &ch;
	*pnum = 123;
	*pfnum = 3.14;
	*pch = 'A';
	printf("저장된 값\n%d %.2f %c\n", *pnum, *pfnum, *pch);
	return 0;
}

#include <stdio.h>

int main(void) {
	// mainEX();
	int* pnum;
	double* pfnum;
	char* pch;
	{ 
		// 격리된 공간을 넘어서 쓸 수 있게 해준다.
		// - 내 통제를 통해서만 하겠다.
		int num;
		double fnum;
		char ch;
		pnum = &num;
		pfnum = &fnum;
		pch = &ch;
	}
	*pnum = 123;
	*pfnum = 3.14;
	*pch = 'A';
	printf("저장된 값\n%d %.2f %c\n", *pnum, *pfnum, *pch);
	return 0;
}