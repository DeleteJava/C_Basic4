#include <stdio.h>

int main(void) {
	char word1[8];
	char word2[8] = "APPLE!";
	int size = sizeof(word1) / sizeof(char);
	// �� �迭�� ���ڸ� �ϳ��� �Է��� �޾� �����ϰ�
	for (int i = 0; i <= size - 1; i += 1) {
		printf("����%d �Է� >> ", i + 1);
		scanf_s(" %c", &word1[i], 1);
	}
	// �̸� ����ϼ���.
	printf("word1: %s\n", word1);
	// ��� : printf("%s")�� ��������� �ȵ˴ϴ�.
	printf("word1 : ");
	for (int i = 0; i <= size - 1; i += 1) {
		printf("%c", word1[i]);
	} printf("\n");
	return 0;
}