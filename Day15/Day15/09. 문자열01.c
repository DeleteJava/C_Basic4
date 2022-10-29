#include <stdio.h>

int main(void) {
	// 문자열 : 문자변수로 이루어진 자료구조
	
	char word1[10] = "012345678";	// 문자변수 10개
	// 단일문자	:	(10 - 1) / 1 =  9글자
	char word2[10] = "한글이다";		// 문자변수 10개
	// 그 외		:	(10 - 1) / 2 =  4글자
	char word3[27]; // 문자변수 27개
	// 단일문자	:	(27 - 1) / 1 = 26글자
	// 그 외		:	(27 - 1) / 2 = 13글자

	// 문자열변수 선언시 주의사항 : 필요한 크기를 예측한다!
	// 크기예측은 어떻게 하는가? -> 직접 계산해야 한다.
	char word4[18] = "This is Sparta!!!";
	char word5[32] = "이건 This이고, 저건 That입니다.";
	char word6[29] = "### 이러면 아주 복잡하죠 ###";
	char word7[36] = "하지만 이게 지금부터 풀 문제입니다.";
	// 여러 크기를 받을 경우 최대값으로 준비해야 한다.

	printf("word4 : %s\n마지막 : %c\n", word4, word4[sizeof(word4) - 2]);
	printf("word5 : %s\n마지막 : %c\n", word5, word5[sizeof(word5) - 2]);
	printf("word6 : %s\n마지막 : %c\n", word6, word6[sizeof(word6) - 2]);
	printf("word7 : %s\n마지막 : %c\n", word7, word7[sizeof(word7) - 2]);
	return 0;

}