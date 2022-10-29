#include <stdio.h>
// 포인터는 남발하면 남발하수록 코드가 점점 더 어려워진다!!!!
// - 사용시점은 2가지
//   공유해서 써야할 때( 저장한 값을 바로 이용하겠다 / return 2개 이상 / 기타 등등... )
//   배열 다룰 때( 포인터로만 감당가능 )
void get_sum(int* arr, int size, int* result) {
	for (int i = 0; i <= size - 1; i += 1) {
		*result += arr[i];
	}
}
// 남발하면 코드가 엄청 복잡해진 주의할 것.
// - 철저하게 절제해서 사용해야 한다!
int get_sum1(int* arr, int size) {
	int result = 0;
	for (int i = 0; i <= size - 1; i += 1) {
		result += arr[i];
	}
	return result;
}
int main(void) {
	int arr[4];
	int size = sizeof(arr) / sizeof(int);
	int result = 0;
	for (int i = 0; i <= size - 1; i+=1) {
		printf("정수값%d 입력 >> ", i + 1);
		scanf_s("%d", &arr[i]);
	}
	get_sum(arr, size ,&result);
	printf("합 : %d\n", result);
	

	return 0;
}