#include <stdio.h>
// �����ʹ� �����ϸ� �����ϼ��� �ڵ尡 ���� �� ���������!!!!
// - �������� 2����
//   �����ؼ� ����� ��( ������ ���� �ٷ� �̿��ϰڴ� / return 2�� �̻� / ��Ÿ ���... )
//   �迭 �ٷ� ��( �����ͷθ� ���簡�� )
void get_sum(int* arr, int size, int* result) {
	for (int i = 0; i <= size - 1; i += 1) {
		*result += arr[i];
	}
}
// �����ϸ� �ڵ尡 ��û �������� ������ ��.
// - ö���ϰ� �����ؼ� ����ؾ� �Ѵ�!
int get_sum1(int* arr, int size) {
	int result = 0;
	for (int i = 0; i <= size - 1; i += 1) {
		result += arr[i];
	}
	return result;
}
int main(void) {
	int arr[4];
	int size = sizeof(arr) / sizeof(int);
	int result = 0;
	for (int i = 0; i <= size - 1; i+=1) {
		printf("������%d �Է� >> ", i + 1);
		scanf_s("%d", &arr[i]);
	}
	get_sum(arr, size ,&result);
	printf("�� : %d\n", result);
	

	return 0;
}