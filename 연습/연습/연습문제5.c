#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// �迭�� ����� for ���� ���� ��ȣ�� ��ü �̾Ҵ� ��ȣ�� ���ϰ� ���� ��ȣ�� ������ ���� ���� ��ȣ��
// �ٽ� �̴� ����ó���� �߽��ϴ�. ����� �� �����ѰͰ� �迭�� �Ѿ�� ���� �ԷµǸ� ������ ��������
// ������ �����մϴ�. �� ���� �� ���� �ڵ带 ���� �� �־ �����ϴ�.

int main(void)
{
	srand(time(NULL));

	int max_num = 0;	// �ִ� ��ȣ��;
	int creat_num = 0;  // �������� ����;
	int count = 0;		// ���� Ƚ��
	int num = 0;		// ��� ����;
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
