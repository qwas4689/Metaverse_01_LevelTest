#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// 배열을 만들어 for 지금 뽑은 번호와 전체 뽑았던 번호를 비교하고 같은 번호가 있으면 지금 뽑은 번호를
// 다시 뽑는 예외처리를 했습니다. 방식이 좀 무식한것과 배열을 넘어가는 수가 입력되면 오류가 생기지만
// 지금은 만족합니다. 더 배우고 더 좋은 코드를 만들 수 있어서 좋습니다.

int main(void)
{
	srand(time(NULL));

	int max_num = 0;	// 최대 번호값;
	int creat_num = 0;  // 생성숫자 개수;
	int count = 0;		// 돌린 횟수
	int num = 0;		// 출력 숫자;
	int arr[1000] = { 0 };

	scanf_s("%d %d", &max_num, &creat_num);

	for (count; count < creat_num; ++count)
	{
		num = rand() % max_num + 1;

		arr[count] = num;
		for (int i = 0; i < count; ++i)
		{
			if (arr[i] == arr[count])
			{
				arr[count] = rand() % max_num + 1;
				i = -1;
			}	
		}

		printf("%d ", arr[count]);
	}
}
