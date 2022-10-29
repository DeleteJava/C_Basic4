#include <stdio.h>

int main(void) {
	// 포인터 : 내가 원하는 시점에 올바르게 변수를 공유하여 사용하기 위한 방법
	// 단일변수 : num -> *pnum
	// -> 해당변수로 완벽하게 둔갑한다.
	// 배열 : arr[n] -> *(parr + n)
	// -> 해당 인덱스의 변수로 완벽하게 둔갑한다.
	// -> 배열의 전체크기는 못구하니 주의할 것....
	char word[15];
	int size = sizeof(word) / sizeof(char);
	char* pword = word;
	// 포인터의 값은 "봐도" 쓸모가 없지만
	// 포인터의 값은 "이용" 할 수 있습니다.
	printf("최대 %d글자의 단어 입력 >> ", size - 1);
	scanf_s("%s", pword, size);

	printf("입력된 단어 : %s\n", pword);
	return 0;
}