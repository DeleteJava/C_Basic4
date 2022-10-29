#include <stdio.h>

int main(void) {
	// scanf_s( ) 문자/문자값에 붙는 숫자의 의미
	// gets_s( ) 붙는 숫자의 의미
	// - 저장공간을 <절대> 못넘게 한다!
	// - 이걸 빼먹으면, 정상입력안됨...
	// - 그 다음 오는 것은 범위값???으로 인식한다.
	// - 입력에 실패하거나, 문제가 생기면, 설정된 크기만큼
	//   공간을 0으로 싹다 밀어버림
	char word1[8] = {0};
	char word2[8] = {0};
	printf("1 >> ");
	// 범위를 올바르게 넣어주기 위한 것이니 주의할 것.
	scanf_s("%s%s", word1, sizeof(word1), word2, sizeof(word2));
	printf("-%s\n-%s\n", word1, word2);


	// printf("2 >> ");
	// scanf("%s", word1);
	// scanf("%s", word2);
	// printf("-%s\n-%s\n", word1, word2);
	return 0;
}