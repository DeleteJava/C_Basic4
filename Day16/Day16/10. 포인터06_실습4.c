#include <stdio.h>

int main(void) {
	int arr[4] = { 5, 10, 15, 20 };
	
	// �����Ͱ� ���� ��������� �ٲ��, �̸� �޾Ƶ鿩�� ��
	// �� C���� �ּҰ��� ���������ϸ� ���� ����ü�� Ż�ٲ޵�.
	int* parr = arr;
	printf("�迭�� ����� ��\n");
	printf("%d, %d, %d, %d\n", 
		*(parr+0), *(parr+1), *(parr+2), *(parr+3));
	return 0;
}