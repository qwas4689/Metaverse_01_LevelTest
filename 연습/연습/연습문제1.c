#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// _c ���� ���� �� 
// _a ���� �Ű����� a�� _b ���� �Ű���� b�� �ְ� 
// _a�� _b�� ���� _b�� _c�� ���� �־��� ��
// _a�� _b�� ����մϴ�
void swap(int* a, int* b)
{
	int _a, _b;
	int _c;
	_a = a;
	_b = b;

	_c = _a;
	_a = _b;
	_b = _c;

	printf("%d %d", _a, _b);
}

// �����Ϳ� ���� ���Ǵ� ���۷��� �ε� ���� ������ �� �ȵǾ� �ֽ��ϴ�.
