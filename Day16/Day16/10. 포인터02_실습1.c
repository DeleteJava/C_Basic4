#include <stdio.h>

int mainEX(void) {
	int num; double fnum; char ch;
	// �ǽ�1
	// �Ʒ��� �ڵ忡�� ������ �̿��ϴ� �κ���
	// ��� �����ͺ����� �ٲ��ּ���.
	// �� �����ͺ����� �ڷ����� �ٷ�� ������ �ڷ���* ���·� ��ġ��ŵ�ϴ�.
	// �� �����ͺ����� p+��󺯼������� ���ִ� ���� �����ϴ�.
	// �� �߸��� �������� ��Ī��Ű�� ���������� ����� �ȴ�.
	int* pnum = &num;
	double* pfnum = &fnum;
	char* pch = &ch;
	*pnum = 123;
	*pfnum = 3.14;
	*pch = 'A';
	printf("����� ��\n%d %.2f %c\n", *pnum, *pfnum, *pch);
	return 0;
}

#include <stdio.h>

int main(void) {
	// mainEX();
	int* pnum;
	double* pfnum;
	char* pch;
	{ 
		// �ݸ��� ������ �Ѿ �� �� �ְ� ���ش�.
		// - �� ������ ���ؼ��� �ϰڴ�.
		int num;
		double fnum;
		char ch;
		pnum = &num;
		pfnum = &fnum;
		pch = &ch;
	}
	*pnum = 123;
	*pfnum = 3.14;
	*pch = 'A';
	printf("����� ��\n%d %.2f %c\n", *pnum, *pfnum, *pch);
	return 0;
}