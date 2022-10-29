#include <stdio.h>

int main(void) {
	// 곤란한 상황 : 저장공간보다 적은 문자열이 저장되면....
	char word1[31] = "Apple";
	// 문자열의 끝은 0으로 초기화된 값이 붙는다.
	// - 모자르게 들어가도, 거기서 멈추도록 하는 것
	
	// 실제 저장된 값만 복사하는 경우
	// 실제 저장된 값의 수량을 구해서, 비교하고, 반복한다.
	
	// 1. 0을 찾아서 멈춘다음, 그 값만큼 반복돈다.
	int size1 = sizeof(word1) / sizeof(char);
	int count = 0;
	while( count <= size1 - 1 && word1[count] != 0) {
		count += 1;
	}
	// 문자열의 끝은 제외이다.
	printf("실제 저장된 값의 크기 : %d\n", count);
	
	// 2. 저장할려는 배열과 크기를 비교한다.
	char word2[6];
	if (sizeof(word2) <= count) {
		printf("저장하면 제대로 출력이 안됩니다.\n");
	}
	else {
		for (int i = 0; i <= count; i++) {
			word2[i] = word1[i];
		}
		// printf("저장됩니다.\n");
		printf("word2 : %s\n", word2);
	}
	return 0;
}