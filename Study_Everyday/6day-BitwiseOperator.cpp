#include<stdio.h>

#define HUNGRY 1
#define THIRSTY 2
#define TIRED 4
#define COLD 8
#define HOT 16

// 함수 Factorial
// 4! 이라고 가정 할 때
int Factorial(int _iNum)
{
	int iValue = 1;

	for (int j = 0; j < _iNum - 1; ++j)
	{
		iValue *= (j + 2);
	}

	return iValue;
}


int main()
{
	int iValue = Factorial(4);

	iValue = Factorial(10);

	// 비트 곱(&), 합(|), xor(^), 반전(~)
	// 비트단위로 연산을 진행
	// & 둘다 1인 경우 1
	// | 둘 중 하나라도 1이면 1
	// ^ 같으면 0, 다르면 1
	// ~ 1인 0으로, 0은 1로
	unsigned int iStatus = 0;

	iStatus |= HUNGRY; // 헝그리의 상태를 iStatus에 비트를 합치겠다는 의미
	iStatus |= THIRSTY;
	iStatus |= COLD;

	if (iStatus & THIRSTY)
	{
		printf("목마른 상태 입니다.\n");
	}

	if (iStatus & HUNGRY)
	{
		printf("배고픈 상태 입니다.\n");
	}

	// 특정 자리 비트 제거
	iStatus &= ~COLD;
	//위에서 제거를 했기 때문에 상태가 풀려서 출력이 안됨.
	if (iStatus & COLD) 
	{
		printf("추운 상태 입니다.\n");
	}

}

