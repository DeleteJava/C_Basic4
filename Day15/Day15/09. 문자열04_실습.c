#include <stdio.h>


int main(void) {
	char word1[6] = { 0 };
	char word2[11] = { 0 };
	char original[21] = { 0 };
	// �ܾ �Է��� �޾� original�迭�� �����մϴ�.
	// ����� ���� ũ�⸦ ���ؼ� �Ʒ� �迭�� ���簡 �Ǵ���
	// Ȯ���ϰ�, �����մϴ�.
	// ���ڿ� ������ ����Ͽ� ����� Ȯ���ϼ���	
	printf("������ �ܾ� �Է� >> ");
	scanf_s("%s", original, sizeof(original));
	// scanf_s�� �ٴ� ���� : ��������� �Ѿ ��� �������� �ʱ� ����.
	printf("���� : %s\n", original);
	printf("word1 : %s\n", word1);
	printf("word2 : %s\n", word2);
	int count = 0;
	while (original[count] != '\0' && count <= sizeof(original) - 1) {
		count += 1;
	}
	if (sizeof(word1) <= count) {
		printf("����Ұ�...\n");
	}
	else {
		for (int i = 0; i <= count; i += 1) {
			word1[i] = original[i];
		}
	}
	if (sizeof(word2) <= count) {
		printf("����Ұ�...\n");
	}
	else {
		for (int i = 0; i <= count; i += 1) {
			word2[i] = original[i];
		}
	}
	printf("���� : %s\n", original);
	printf("word1 : %s\n", word1);
	printf("word2 : %s\n", word2);

	return 0;
}