#include <stdio.h>

int main(void) {
	// ����� ��Ȳ : ����������� ���� ���ڿ��� ����Ǹ�....
	char word1[31] = "Apple";
	// ���ڿ��� ���� 0���� �ʱ�ȭ�� ���� �ٴ´�.
	// - ���ڸ��� ����, �ű⼭ ���ߵ��� �ϴ� ��
	
	// ���� ����� ���� �����ϴ� ���
	// ���� ����� ���� ������ ���ؼ�, ���ϰ�, �ݺ��Ѵ�.
	
	// 1. 0�� ã�Ƽ� �������, �� ����ŭ �ݺ�����.
	int size1 = sizeof(word1) / sizeof(char);
	int count = 0;
	while( count <= size1 - 1 && word1[count] != 0) {
		count += 1;
	}
	// ���ڿ��� ���� �����̴�.
	printf("���� ����� ���� ũ�� : %d\n", count);
	
	// 2. �����ҷ��� �迭�� ũ�⸦ ���Ѵ�.
	char word2[6];
	if (sizeof(word2) <= count) {
		printf("�����ϸ� ����� ����� �ȵ˴ϴ�.\n");
	}
	else {
		for (int i = 0; i <= count; i++) {
			word2[i] = word1[i];
		}
		// printf("����˴ϴ�.\n");
		printf("word2 : %s\n", word2);
	}
	return 0;
}