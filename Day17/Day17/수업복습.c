#include <stdio.h>


void sum_arr(int* parr, int* result, int arr_size)
{
	for (int i = 0; i <= arr_size - 1; i++)
	{
		*result += *(parr + i);
	}
}




int main(void)
{
	int arr[4] = { 0, };
	int arr_size = sizeof(arr) / sizeof(int);
	for (int i = 0; i <= arr_size - 1; i++)
	{
		printf("(%d)배열의 값을 입력 : ", i + 1);
		scanf_s("%d", &arr[i]);
	}
	int result = 0;
	sum_arr(arr, &result, arr_size);
	printf("합 : %d", result);
	
	return 0;
}