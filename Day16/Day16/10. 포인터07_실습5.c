#include <stdio.h>

int main(void) {
	// �����ͺ����� ������ ������ ��ü�Ѵ�.
	double arr[5] = { 0 };
	int size = sizeof(arr) / sizeof(double);

	double* parr = arr; // arr[0] -> *(parr+0)
	printf("�Ǽ��� %d�� �Է� >> ", size);
	for (int i = 0; i <= size - 1; i += 1) {
		// &*�� �����������, �������� �پ� ������
		// ���ȴ�.
		// scanf_s("%lf", &*(parr + i));
		scanf_s("%lf", (parr + i));
	}
	printf("����� �� : ");
	for (int i = 0; i <= size - 1; i += 1) {
		printf("%.1f ", *(parr + i));
	} printf("\n");
	return 0;
}