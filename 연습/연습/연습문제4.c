#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// Ǯ�� �������� �迭�� �����Ͽ� �ϳ��� ���� ���� �ּڰ����� ����ϰ� ����� ���� �����ϴ�
// ���̵� ���������� ������ ���� ���߽��ϴ�.

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
