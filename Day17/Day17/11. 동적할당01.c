#include <stdio.h>
#include <malloc.h>

int main(void) {
	// �����Ҵ� : ������ �ü������ ��û�Ͽ� �޾ƿ���
	// malloc : Memory ALLOCation ����
	// ���ǻ��� : �⺻����� ���� ������� �ʴ´�.
	// int* pnum = malloc(4);
	
	// ���� �����
	// - ��ü�� ���� ������ �޸��ּҸ� �Ѱ��ش�.
	// - �Ǽ������� ���ؼ�, �������� �������� �Ʒ��� ���� ����.
	int* pnum = (int*)malloc(sizeof(int)); // &num
	double* pfnum = (double*)malloc(sizeof(double)); // &fnum
	// �����Ҵ��� ������ ���⼭ ��
	// ������ ������ �Ҵ��� ������ �� �ֱ� ������ ���ǽ����� ������ ��츸
	// ��Ȯ�ϰ� ��󳻼� �����ؾ� �Ѵ�.
	if (pnum != NULL && pfnum != NULL) {
		*pnum = 100;
		*pfnum = *pnum;
		//	printf("%d %.2f\n", *pnum, *pfnum);
	}
	else {
		printf("���� �ϳ��� ���������� �����߽��ϴ�!!\n");
	}
	// free : FREE memory allocation
	// ����� �� ���� ������ �ݳ���Ű�� �Լ�
	if (pnum != NULL) {
		// 1. �����ͺ����� �Ȼ����.
		// 2. ����� ���� �ȹٲ�.
		// 3. �����Ҵ����������� �� �Ŀ� ������ ���� �����ؾ� ��
		free(pnum);
		pnum = NULL;
	}
	if (pfnum != NULL) {
		free(pfnum);
		pfnum = NULL;
	}
	return 0;
}