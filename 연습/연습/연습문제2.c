#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���� a�� ����� 1�� �ʱ�ȭ�� ���� �� for ���� ����Ͽ� 3�� �¼��� ���߽��ϴ�.
// a�� ���� 1000�� �ʰ��ϸ� ���߰� �Ͽ����ϴ�.
int main(void)
{
	int a = 1;

	for (int i = 1; a < 1000; i * 3)
	{
		a *= 3;
		if (a >= 1000)
		{
			break;
		}
		printf("%d\n", a);

	}
}
