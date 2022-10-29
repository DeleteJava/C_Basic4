#include <stdio.h>

int init_variable1(int data) {
	return data;
}
void init_variable2(double* pfnum1, char* pch1) {
	*pfnum1 = 99.99;
	*pch1 = 'Z';
	printf("함수에서 불러온 값 : %.2f, %c\n", *pfnum1, *pch1);
}
void init_arr(int* arr, int size) {
	for (int i = 0; i <= size - 1; i += 1) {
		arr[i] = i + 1;
	}
}
void show_arr(int* arr, int size) {
	for (int i = 0; i <= size - 1; i += 1) {
		printf("%d ", arr[i]);
	} printf("\n");
}
int main(void) {
	// 포인터의 실제사용 : 함수
	// - 변수 공유한다.
	//  - 1. return을 2개 이상 시키기 위해서.
	//      - 동시에 저장된 값도 바로 불러와서 이용가능
	//      - 초점이 옮겨진 상태이지만, 코드는 실행된 곳에 실시간으로 실행되며
	//        그 결과를 반영한다.
	int num1;
	double fnum1;
	char ch1;
	num1 = init_variable1(10);
	init_variable2(&fnum1, &ch1);
	printf("%d %.2f %c\n", num1, fnum1, ch1);
	//  - 2. 너무 거대해서. 배열같은 것들은 복제본을 만들려고 하지 않는 이상
	//      복사하기에는 너무 크다.
	//      공간을 복사할 수 없고, 복사하는 것보다는 주소값만 넘기는게 <훨 씬 더 빠 르 다>.
	//      RAM 은 한정된 용량밖에 없음....
	int arr[15] = { 0 };
	show_arr(arr, sizeof(arr) / sizeof(int));
	init_arr(arr, sizeof(arr) / sizeof(int));
	show_arr(arr, sizeof(arr) / sizeof(int));

	return 0;
}