#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 풀진 못했으나 배열을 복사하여 하나씩 비교해 가며 최솟값부터 출력하고 출력한 값은 삭제하는
// 아이디어를 생각했으나 구현은 하지 못했습니다.

void sortArray(int* arr, int n)
{
	int crr[1024] = { 0 };
	int min = n;
	for (int i = 0; i < n; i++)
	{
		crr[i] = arr[i];
	}

	for (int i = 0; arr[i] != '/n'; ++i)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		printf("%d ", crr[i]);
	}
}

int main(void)
{
	int arr[5] = { 5, 2, 4, 1, 3 };

	sortArray(arr, 5);
}
