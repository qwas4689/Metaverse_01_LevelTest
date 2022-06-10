#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 변수 a를 만들고 1로 초기화를 해준 후 for 문을 사용하여 3의 승수를 구했습니다.
// a의 값이 1000을 초과하면 멈추게 하였습니다.
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
