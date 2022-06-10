#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// _c 변수 생성 후 
// _a 값에 매개변수 a를 _b 값에 매개면수 b를 넣고 
// _a에 _b의 값을 _b에 _c의 값을 넣어준 후
// _a와 _b를 출력합니다
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

// 포인터와 같게 사용되는 레퍼런스 인데 사용법 숙지가 잘 안되어 있습니다.
