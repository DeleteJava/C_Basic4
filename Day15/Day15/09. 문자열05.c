#include <stdio.h>

int main(void) {
	// scanf_s( ) ����/���ڰ��� �ٴ� ������ �ǹ�
	// gets_s( ) �ٴ� ������ �ǹ�
	// - ��������� <����> ���Ѱ� �Ѵ�!
	// - �̰� ��������, �����Է¾ȵ�...
	// - �� ���� ���� ���� ������???���� �ν��Ѵ�.
	// - �Է¿� �����ϰų�, ������ �����, ������ ũ�⸸ŭ
	//   ������ 0���� �ϴ� �о����
	char word1[8] = {0};
	char word2[8] = {0};
	printf("1 >> ");
	// ������ �ùٸ��� �־��ֱ� ���� ���̴� ������ ��.
	scanf_s("%s%s", word1, sizeof(word1), word2, sizeof(word2));
	printf("-%s\n-%s\n", word1, word2);


	// printf("2 >> ");
	// scanf("%s", word1);
	// scanf("%s", word2);
	// printf("-%s\n-%s\n", word1, word2);
	return 0;
}