#include <stdio.h>


int main(void) {
	char word1[6] = { 0 };
	char word2[11] = { 0 };
	char original[21] = { 0 };
	// 단어를 입력을 받아 original배열에 저장합니다.
	// 저장된 값의 크기를 구해서 아래 배열에 복사가 되는지
	// 확인하고, 복사합니다.
	// 문자열 변수를 출력하여 결과를 확인하세요	
	printf("복사할 단어 입력 >> ");
	scanf_s("%s", original, sizeof(original));
	// scanf_s에 붙는 숫자 : 저장공간을 넘어설 경우 저장하지 않기 위함.
	printf("원본 : %s\n", original);
	printf("word1 : %s\n", word1);
	printf("word2 : %s\n", word2);
	int count = 0;
	while (original[count] != '\0' && count <= sizeof(original) - 1) {
		count += 1;
	}
	if (sizeof(word1) <= count) {
		printf("저장불가...\n");
	}
	else {
		for (int i = 0; i <= count; i += 1) {
			word1[i] = original[i];
		}
	}
	if (sizeof(word2) <= count) {
		printf("저장불가...\n");
	}
	else {
		for (int i = 0; i <= count; i += 1) {
			word2[i] = original[i];
		}
	}
	printf("원본 : %s\n", original);
	printf("word1 : %s\n", word1);
	printf("word2 : %s\n", word2);

	return 0;
}