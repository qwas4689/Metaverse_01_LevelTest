#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


// 5 x 5 에 랜덤숫자까진 구현했으나 예외처리를 잘 하지 못했습니다.
// 앞의 예외처리와 같이 매 이중배열을 비교하여 같은 숫자가 들어가면 다시 뽑는처리를 하였으나 
// 잘 먹히지 않았습니다.
// 이중배열은 예외처리를 다르게 해야되는 것 같습니다.
// 생각해 본 아이디어론 입력받은 숫자의 공간을 " " 로 바꿔주고
// 조건문으로 행 열 대각선의 값이 " "으로 같다면 빙고숫자를 출력 해 주는 것 입니다.
// 좀 더 공부하고 풀어봐야겠습니다.

int main(void)
{
	srand(time(NULL));

	int bord[5][5] = { 0 };
	int num = 0;
	int change_num = 0;
	int arr[5][5] = {0};

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			num = rand() % 25 + 1;
			bord[i][j] = num;
			arr[i][j] = num;

			for (int a = 0; a < 5; ++a)
			{
				for (int b = 0; b < 5; ++b)
				{
					if (bord[i][j] == arr[a][b])
					{
						change_num = rand() % 25 + 1;
						arr[a][b] = change_num;

					}
				}
			}

			printf("%d\t", bord[i][j]);
		}
		printf("\n");
	}
}