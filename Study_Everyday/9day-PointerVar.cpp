#include <stdlib.h>
#include <stdio.h>

void Test(int* a)
{
	// 함수가 종료되면 어차피 사라질 값이기 때문에 실제로 main 함수에서 Test함수를 불러와도 a 값은 적용이 안됨
	*a = 500;
}


int main()
{
	// 포인터 변수
	// 자료형 변수명
	int* pInt = nullptr;

	// 주소를 저장
	char* pChar = nullptr; // pChar에 저장된 주소값을 char로 보겠다는 의미이지 pChar가 char 타입이라는 의미가 아님
	short* pShort = nullptr; // 그렇기 때문에 안에 저장된 값이 뭐든 상관이 없음. 보겠다고 데이터 타입을 지정하는대로 보는 것일뿐임

	// 포인터 변수의 크기는 8 바이트이다. (64비트 컴퓨터 일 경우)
	int iSize = sizeof(pInt);

	int i = 0;
	pInt = &i;
	pInt += 1;

	// pInt sms int* 변수이기 때문에, 가르키는 곳을 int로 해석한다.
	// 따라서 주소값을 1 증가하는 의미는 다음 int 위치로 접근하기 위해서 sizeof(int) 단위로 증가하게 된다.

	// 포인터와 배열
	// 배열의 특징
	// 1. 메모리가 연속적인 구조이다.
	// 2. 배열의 이름은 배열의 시작 주소이다.
	int iArr[10] = {};
	
	// int 단위로 접근
	*(iArr + 0) = 10; // iArr[0] = 10;
	*(iArr + 1) = 10; // iArr[1] = 10;


	// 문제 1

	short sArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int* pI = (int*)sArr;

	int iData = *((short*)(pI + 2));

	printf("1번 문제 정답 : %d \n", iData);


	// 문제 2
	char cArr[2] = { 1, 1 };

	short* pS = (short*)cArr;

	iData = *pS;

	printf("2번 문제 정답 : %d \n", iData);

	//

	int a = 100;
	Test(&a);
	printf("a의 값은 : %d \n", a);

	return 0;
}