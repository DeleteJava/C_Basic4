#include <stdio.h>

int init_variable1(int data) {
	return data;
}
void init_variable2(double* pfnum1, char* pch1) {
	*pfnum1 = 99.99;
	*pch1 = 'Z';
	printf("�Լ����� �ҷ��� �� : %.2f, %c\n", *pfnum1, *pch1);
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
	// �������� ������� : �Լ�
	// - ���� �����Ѵ�.
	//  - 1. return�� 2�� �̻� ��Ű�� ���ؼ�.
	//      - ���ÿ� ����� ���� �ٷ� �ҷ��ͼ� �̿밡��
	//      - ������ �Ű��� ����������, �ڵ�� ����� ���� �ǽð����� ����Ǹ�
	//        �� ����� �ݿ��Ѵ�.
	int num1;
	double fnum1;
	char ch1;
	num1 = init_variable1(10);
	init_variable2(&fnum1, &ch1);
	printf("%d %.2f %c\n", num1, fnum1, ch1);
	//  - 2. �ʹ� �Ŵ��ؼ�. �迭���� �͵��� �������� ������� ���� �ʴ� �̻�
	//      �����ϱ⿡�� �ʹ� ũ��.
	//      ������ ������ �� ����, �����ϴ� �ͺ��ٴ� �ּҰ��� �ѱ�°� <�� �� �� �� �� ��>.
	//      RAM �� ������ �뷮�ۿ� ����....
	int arr[15] = { 0 };
	show_arr(arr, sizeof(arr) / sizeof(int));
	init_arr(arr, sizeof(arr) / sizeof(int));
	show_arr(arr, sizeof(arr) / sizeof(int));

	return 0;
}