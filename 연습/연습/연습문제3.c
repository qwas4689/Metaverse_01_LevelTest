#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 별찍기 입니다.
// 좌절을 겪은 후 머리깨져가며 복습한 보람이 있었습니다.

int main(void)
{
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 5; i < j - 1; --j)
		{
			printf(" ");
		}
		for (int j = 0; j < i * 2 + 1; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
}
