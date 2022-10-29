#include <stdio.h>

int main(void) {
	int arr[7] = { 0 };
	int result = 0;
	int size = sizeof(arr) / sizeof(int);
	for (int i = 1; i <= size; i += 1) {
		printf("정수%d 입력 >> ", i);
		scanf_s("%d", &arr[i-1]);
	}
	for (int i = 0; i <= size - 1; i += 1) {
		result += arr[i];
	}
	printf("값들의 합 : %d\n", result);
	printf("값들의 평균 : %.2f\n", result/(double)size);
	return 0;
}