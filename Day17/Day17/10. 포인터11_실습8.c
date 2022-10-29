#include <stdio.h>

void show_arr(double* arr, int size) {
	// 배열을 포인터로 다룬다 = 변수명만 바꾸면 됨.
	// *(arr + n) == arr[n]
	printf("배열에 저장된 %d개의 값\n", size);
	for (int i = 0; i <= size - 1; i += 1) {
		printf("%.1f ", arr[i]);
	} printf("\n");
}
int main(void) {
	double arr[6];
	int size = sizeof(arr) / sizeof(double);
	for (int i = 1; i <= size; i += 1) {
		arr[i - 1] = 1.1 * i;
	}
	show_arr(arr, size);
	return 0;
}