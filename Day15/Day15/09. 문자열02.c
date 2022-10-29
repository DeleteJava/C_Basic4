#include <stdio.h>

int main(void) {
	// C언에서 문자열은 무조건 배열이다.
	printf("%c\n", "Apple!"[0]);
	// 상수문자열 : 특별히 예외적으로 준비되는 문자배열
	// 문자열의 선언후 초기화 : 상수배열로부터 값을 하나씩 전부 복사한다.
	
	// 문자열은 비교할 수 없음 - 저장공간이 어디 있어요...라는 정보.
	// 문자열은 따로 초기화 안됨 - 변수를 복사할 수 없음
	
	char word[16];
	// 문자열 복사시 주의사항 : 인덱스 찍는 것은 동일하나..
	// 저장공간의 크기가 복사할 값의 크기보다 같거나 더 커야 된다...
	if (sizeof(word) >= sizeof("This is Sparta!")) {
		for (int i = 0; i <= 16 - 1; i += 1) {
			word[i] = "This is Sparta!"[i];
		}
		printf("결과 : %s\n", word);
	}
	else printf("복사 불가...\n");

	// ex) 문자열값을 선택해서 출력할려면...
	char msg[10] = { 0 };
	int num = 3;
	// 입력/출력은 %s로 되지만, 그 외 운용은 배열로써 운용한다.
	if (num % 2 == 0) {
		for (int i = 0; i <= 10 - 1; i += 1) {
			msg[i] = "짝수이다."[i];
		}
	}
	else {
		for (int i = 0; i <= 10 - 1; i += 1) {
			msg[i] = "홀수이다."[i];
		}
	}
	printf("%s\n", msg);
	return 0;
}