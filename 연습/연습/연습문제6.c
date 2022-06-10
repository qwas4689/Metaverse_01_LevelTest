#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


// 여기도 무식하게 배열을 53개나 썻고
// 플레이어1과 플레이어2 의 배열을 만들어
// 카드를 뽑을때마다 넣어주었습니다.
// 카드게임이 규칙 상 서로 번갈아가며 뽑아야 하지만
// 문제에 명시되어 있지 않아 무시하였습니다.
// 이미 뽑은 카드의 예외처리는 연습문제 5번과 같이 예외처리를 하였고
// 플레이어1의 배열과 플레이어2 가 지금 뽑은 카드를 비교하여 다시 뽑은 예외처리도 하였는데
// 어쩌다 한번 중복이 생겨 플레이어1의 카드와 플레이어2의 카드를 직접 비교하는 반복문을 넣었습니다.
// 수 차례 돌려봤고 중복은 나오지 않았으나 낮은 확률로 중복이 나올것 같습니다......

int main(void)
{
	char* card_game[53] = {
	"♥A", "♥2", "♥3", "♥4", "♥5", "♥6", "♥7", "♥8", "♥9", "♥10", "♥J", "♥Q", "♥K",
	"♣A", "♣2", "♣3", "♣4", "♣5", "♣6", "♣7", "♣8", "♣9", "♣10", "♣J", "♣Q", "♣K",
	"♠A", "♠2", "♠3", "♠4", "♠5", "♠6", "♠7", "♠8", "♠9", "♠10", "♠J", "♠Q", "♠K",
	"◆A", "◆2", "◆3", "◆4", "◆5", "◆6", "◆7", "◆8", "◆9", "◆10", "◆J", "◆Q", "◆K", "Joker"
	};

	char* player1_card[7] = { 0 };
	char* player2_card[7] = { 0 };

	int symbol1 = 0;
	int symbol2 = 0;
	int symbol3 = 0;

	srand(time(NULL));

	for (int turn = 0; turn < 7; ++turn)
	{
		symbol1 = rand() % 53;
		symbol2 = rand() % 53;

		player1_card[turn] = card_game[symbol1];
		player2_card[turn] = card_game[symbol2];

		for (int i = 0; i < turn; ++i)
		{
			if (player1_card[i] == player1_card[turn])
			{
				symbol1 = rand() % 53;
				player1_card[turn] = card_game[symbol1];
				i = -1;
			}
		}
		for (int i = 0; i < turn; ++i)
		{
			if (player2_card[i] == player2_card[turn] || player1_card[i] == player2_card[turn])
			{
				symbol2 = rand() % 53;
				player2_card[turn] = card_game[symbol2];
				i = -1;
			}
		}
	}

	for (int i = 0; i < 7; ++i)
	{
		for (int j = 0; j < 7; ++j)
		{
			if (player1_card[i] == player2_card[j])
			{
				symbol3 = rand() % 53;
				player2_card[j] = card_game[symbol3];
			}
		}
	}

	printf("Player 1 : ");
	for (int i = 0; i < 7; ++i)
	{
		printf("%s ", player1_card[i]);
	}

	printf("\n");

	printf("Player 2 : ");
	for (int i = 0; i < 7; ++i)
	{
		printf("%s ", player2_card[i]);
	}
}
