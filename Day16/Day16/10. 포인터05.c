#include <stdio.h>

int main(void) {
	// 포인터변수로 배열다루기
	int arr[5] = { 10,20,30,40,50 };
	printf("배열변수가 저장한 주소값 : %d\n", arr);
	int* parr = arr;
	// 포인터의 연산기능은 오로지 정수값과 가능하다.
	// - 자료형의 크기만큼 증가한다.
	/*
	printf("%d %d\n", parr + 0, &arr[0]);
	printf("%d %d\n", parr + 1, &arr[1]);
	printf("%d %d\n", parr + 2, &arr[2]);
	printf("%d %d\n", parr + 3, &arr[3]);
	printf("%d %d\n", parr + 4, &arr[4]);
	*/
	int size = sizeof(arr) / sizeof(int);
	for (int i = 0; i <= size - 1; i += 1) {
		printf("%d ", arr[i]);
	} printf("\n");
	// 주의안하면 코드가 터지는 문제점
	// - 변수가 바뀌었다.
	int size1 = sizeof(arr) / sizeof(int);
	// sizeof(parr) / sizeof(int); 못구함...
	for (int i = 0; i <= size1 - 1; i += 1) {
		printf("%d ", *(parr + i));
		// 배열을 다룰 때 주의사항 : 변수는 연산결과를 참조하여
		//                         나오나는 것이다.
	} printf("\n");

	// 포인터변수와 배열변수는 값은 호환되지만, 변수가 다르다.
	// -> 배열의 크기정보는 절대로 넘어오지 않기 때문에...
	//   반복시 반드시 원본으로 구해야 한다.
	return 0;
}