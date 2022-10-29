#include <stdio.h>

int main(void) {
	char msg[30] = "This는 Apple입니다.";
	int size = sizeof(msg) / sizeof(char);
	// 복습문제
	// 배열에 저장된 값중 소문자를 식별하여
	// 대문자로 바꾸세요.
	// 소문자는 97부터 122사이의 정수값입니다.
	// 대문자는 65부터 90사이의 정수값입니다.
	// 소문자에서 32만큼 빼면 대문자가 됩니다.
	// 문자는 원래 정수값입니다.
	// 조건문으로 걸러내어 바꾸면 됩니다.
	
	printf("전 : %s\n", msg);
	for (int i = 0; i <= size - 1 && msg[i] != '\0'; i += 1) {
		if (msg[i] >= 97 && msg[i] <= 122) {
			msg[i] -= 32;
		}
	}
	printf("후 : %s\n", msg);
	return 0;
}