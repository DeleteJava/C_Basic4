#include <stdio.h>

int main(void) {
	// ������ : ���� ���ϴ� ������ �ùٸ��� ������ �����Ͽ� ����ϱ� ���� ���
	// ���Ϻ��� : num -> *pnum
	// -> �ش纯���� �Ϻ��ϰ� �а��Ѵ�.
	// �迭 : arr[n] -> *(parr + n)
	// -> �ش� �ε����� ������ �Ϻ��ϰ� �а��Ѵ�.
	// -> �迭�� ��üũ��� �����ϴ� ������ ��....
	char word[15];
	int size = sizeof(word) / sizeof(char);
	char* pword = word;
	// �������� ���� "����" ���� ������
	// �������� ���� "�̿�" �� �� �ֽ��ϴ�.
	printf("�ִ� %d������ �ܾ� �Է� >> ", size - 1);
	scanf_s("%s", pword, size);

	printf("�Էµ� �ܾ� : %s\n", pword);
	return 0;
}