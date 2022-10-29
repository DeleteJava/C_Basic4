#include <stdio.h>
#include <malloc.h>

int main(void) {
	// 동적할당 : 공간을 운영체제에게 요청하여 받아오기
	// malloc : Memory ALLOCation 약자
	// 주의사항 : 기본사용은 절대 사용하지 않는다.
	// int* pnum = malloc(4);
	
	// 실제 사용방식
	// - 실체가 없는 변수의 메모리주소만 넘겨준다.
	// - 실수방지를 위해서, 교차점검 목적으로 아래와 같이 쓴다.
	int* pnum = (int*)malloc(sizeof(int)); // &num
	double* pfnum = (double*)malloc(sizeof(double)); // &fnum
	// 동적할당의 역할은 여기서 끝
	// 하지만 공간의 할당은 실패할 수 있기 때문에 조건식으로 성공한 경우만
	// 정확하게 골라내서 실행해야 한다.
	if (pnum != NULL && pfnum != NULL) {
		*pnum = 100;
		*pfnum = *pnum;
		//	printf("%d %.2f\n", *pnum, *pfnum);
	}
	else {
		printf("둘중 하나가 공간생성에 실패했습니다!!\n");
	}
	// free : FREE memory allocation
	// 사용이 다 끝난 공간을 반납시키는 함수
	if (pnum != NULL) {
		// 1. 포인터변수는 안사라짐.
		// 2. 저장된 값도 안바뀜.
		// 3. 동적할당해제했으면 그 후에 포인터 사용시 조심해야 함
		free(pnum);
		pnum = NULL;
	}
	if (pfnum != NULL) {
		free(pfnum);
		pfnum = NULL;
	}
	return 0;
}