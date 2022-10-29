#include <stdio.h>

int main(void) {
	int arr[4] = { 5, 10, 15, 20 };
	
	// 포인터가 들어가면 변수모양이 바뀌고, 이를 받아들여야 함
	// ※ C언어에서 주소값은 참조연산하면 변수 그자체로 탈바꿈됨.
	int* parr = arr;
	printf("배열에 저장된 값\n");
	printf("%d, %d, %d, %d\n", 
		*(parr+0), *(parr+1), *(parr+2), *(parr+3));
	return 0;
}