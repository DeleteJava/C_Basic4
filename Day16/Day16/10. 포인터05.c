#include <stdio.h>

int main(void) {
	// �����ͺ����� �迭�ٷ��
	int arr[5] = { 10,20,30,40,50 };
	printf("�迭������ ������ �ּҰ� : %d\n", arr);
	int* parr = arr;
	// �������� �������� ������ �������� �����ϴ�.
	// - �ڷ����� ũ�⸸ŭ �����Ѵ�.
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
	// ���Ǿ��ϸ� �ڵ尡 ������ ������
	// - ������ �ٲ����.
	int size1 = sizeof(arr) / sizeof(int);
	// sizeof(parr) / sizeof(int); ������...
	for (int i = 0; i <= size1 - 1; i += 1) {
		printf("%d ", *(parr + i));
		// �迭�� �ٷ� �� ���ǻ��� : ������ �������� �����Ͽ�
		//                         �������� ���̴�.
	} printf("\n");

	// �����ͺ����� �迭������ ���� ȣȯ������, ������ �ٸ���.
	// -> �迭�� ũ�������� ����� �Ѿ���� �ʱ� ������...
	//   �ݺ��� �ݵ�� �������� ���ؾ� �Ѵ�.
	return 0;
}