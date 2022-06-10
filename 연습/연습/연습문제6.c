#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


// ���⵵ �����ϰ� �迭�� 53���� ����
// �÷��̾�1�� �÷��̾�2 �� �迭�� �����
// ī�带 ���������� �־��־����ϴ�.
// ī������� ��Ģ �� ���� �����ư��� �̾ƾ� ������
// ������ ��õǾ� ���� �ʾ� �����Ͽ����ϴ�.
// �̹� ���� ī���� ����ó���� �������� 5���� ���� ����ó���� �Ͽ���
// �÷��̾�1�� �迭�� �÷��̾�2 �� ���� ���� ī�带 ���Ͽ� �ٽ� ���� ����ó���� �Ͽ��µ�
// ��¼�� �ѹ� �ߺ��� ���� �÷��̾�1�� ī��� �÷��̾�2�� ī�带 ���� ���ϴ� �ݺ����� �־����ϴ�.
// �� ���� �����ð� �ߺ��� ������ �ʾ����� ���� Ȯ���� �ߺ��� ���ð� �����ϴ�......

int main(void)
{
	char* card_game[53] = {
	"��A", "��2", "��3", "��4", "��5", "��6", "��7", "��8", "��9", "��10", "��J", "��Q", "��K",
	"��A", "��2", "��3", "��4", "��5", "��6", "��7", "��8", "��9", "��10", "��J", "��Q", "��K",
	"��A", "��2", "��3", "��4", "��5", "��6", "��7", "��8", "��9", "��10", "��J", "��Q", "��K",
	"��A", "��2", "��3", "��4", "��5", "��6", "��7", "��8", "��9", "��10", "��J", "��Q", "��K", "Joker"
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
