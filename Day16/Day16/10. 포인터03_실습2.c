#include <stdio.h>

int main(void) {
	int num1 = 10;
	int num2 = 15;
	// �� �����ʹ� ������ ���°� �޶��� �� ���̸�
	//   �� ���� �ڵ�� �ǵ帮�� �ʽ��ϴ�.
	int* pnum1 = &num1;
	int* pnum2 = &num2;
	printf("�տ��� : %d\n", *pnum1 + *pnum2);
	printf("������ : %d\n", *pnum1 - *pnum2);
	printf("������ : %d\n", *pnum1 * *pnum2);
	printf("������ : %.2f\n", *pnum1 / (double)*pnum2);
	return 0;
}