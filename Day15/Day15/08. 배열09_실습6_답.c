#include <stdio.h>

int main(void) {
	int arr[7] = { 0 };
	int result = 0;
	int size = sizeof(arr) / sizeof(int);
	for (int i = 1; i <= size; i += 1) {
		printf("����%d �Է� >> ", i);
		scanf_s("%d", &arr[i-1]);
	}
	for (int i = 0; i <= size - 1; i += 1) {
		result += arr[i];
	}
	printf("������ �� : %d\n", result);
	printf("������ ��� : %.2f\n", result/(double)size);
	return 0;
}