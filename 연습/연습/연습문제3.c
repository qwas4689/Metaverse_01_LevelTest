#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ����� �Դϴ�.
// ������ ���� �� �Ӹ��������� ������ ������ �־����ϴ�.

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
