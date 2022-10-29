#include <stdio.h>

int main(void) {
	// 포인터변수는 오로지 변수만 대체한다.
	double arr[5] = { 0 };
	int size = sizeof(arr) / sizeof(double);

	double* parr = arr; // arr[0] -> *(parr+0)
	printf("실수값 %d개 입력 >> ", size);
	for (int i = 0; i <= size - 1; i += 1) {
		// &*는 순서상관없이, 연속으로 붙어 있으면
		// 상쇄된다.
		// scanf_s("%lf", &*(parr + i));
		scanf_s("%lf", (parr + i));
	}
	printf("저장된 값 : ");
	for (int i = 0; i <= size - 1; i += 1) {
		printf("%.1f ", *(parr + i));
	} printf("\n");
	return 0;
}