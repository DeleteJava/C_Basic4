#include <stdio.h>

int main(void) {
	// �����ͺ��� : ������ �ùٸ��� ���� ���ϴ� �������� �����ϱ� ���� ����(���)
	// - ���� ���� ������ �Ⱦ�
	// - ���ó�� �Լ� / �����Ҵ��� ���Ͽ� ����Ѵ�.
	// ����
	int num;
	int* pnum;
	// �ʱ�ȭ
	num = 10;
	pnum = &num; // �����ؼ� ����ҷ��� ��󺯼�
	// �� �ҷ�����
	printf("num : %d\n", num);
	printf("pnum : %d\n", pnum); // �� �ҷ�����
	// ���1
	printf("result : %d\n", num + 5);
	printf("result : %d\n", *pnum); // �ּҰ��� �̿���, ��󺯼��� ����� ���� �ҷ��´�
	// ���2
	num = 15;
	printf("num : %d\n", num);
	printf("*pnum : %d\n", *pnum);
	*pnum = 20; // �ּҰ��� �̿���, ��󺯼��� ������ ���� �ٲ۴�.
	printf("num : %d\n", num);
	printf("*pnum : %d\n", *pnum);
	return 0;
}