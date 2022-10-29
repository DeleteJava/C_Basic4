#include <stdio.h>

int main(void) {
	char word1[8];
	char word2[8] = "APPLE!";
	int size = sizeof(word1) / sizeof(char);
	// 위 배열에 문자를 하나씩 입력을 받아 저장하고
	for (int i = 0; i <= size - 1; i += 1) {
		printf("문자%d 입력 >> ", i + 1);
		scanf_s(" %c", &word1[i], 1);
	}
	// 이를 출력하세요.
	printf("word1: %s\n", word1);
	// 비고 : printf("%s")로 정상출력이 안됩니다.
	printf("word1 : ");
	for (int i = 0; i <= size - 1; i += 1) {
		printf("%c", word1[i]);
	} printf("\n");
	return 0;
}