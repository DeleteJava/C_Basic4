#include <stdio.h>

int main(void) {
	// ���ڿ� : ���ں����� �̷���� �ڷᱸ��
	
	char word1[10] = "012345678";	// ���ں��� 10��
	// ���Ϲ���	:	(10 - 1) / 1 =  9����
	char word2[10] = "�ѱ��̴�";		// ���ں��� 10��
	// �� ��		:	(10 - 1) / 2 =  4����
	char word3[27]; // ���ں��� 27��
	// ���Ϲ���	:	(27 - 1) / 1 = 26����
	// �� ��		:	(27 - 1) / 2 = 13����

	// ���ڿ����� ����� ���ǻ��� : �ʿ��� ũ�⸦ �����Ѵ�!
	// ũ�⿹���� ��� �ϴ°�? -> ���� ����ؾ� �Ѵ�.
	char word4[18] = "This is Sparta!!!";
	char word5[32] = "�̰� This�̰�, ���� That�Դϴ�.";
	char word6[29] = "### �̷��� ���� �������� ###";
	char word7[36] = "������ �̰� ���ݺ��� Ǯ �����Դϴ�.";
	// ���� ũ�⸦ ���� ��� �ִ밪���� �غ��ؾ� �Ѵ�.

	printf("word4 : %s\n������ : %c\n", word4, word4[sizeof(word4) - 2]);
	printf("word5 : %s\n������ : %c\n", word5, word5[sizeof(word5) - 2]);
	printf("word6 : %s\n������ : %c\n", word6, word6[sizeof(word6) - 2]);
	printf("word7 : %s\n������ : %c\n", word7, word7[sizeof(word7) - 2]);
	return 0;

}