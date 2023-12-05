#include<stdio.h>

// 사용자 정의 자료형
typedef struct _tagMyST
{
	int a;
	float f;
}MYST;

int main()
{
// 배열
	// 메모리가 연속적
	int iArray[10] = { };
	int iAraay2[10] = {1,2,3,4,5}; // 안 쓴 나머지는 0으로 채워짐

	iArray[12] = 10; // 12번째가 아니라 13번째에 10을 넣어라
	/* 배열선언했던 자리가 아니라 그냥 메모리적으로 접근해서 13번째 자리에
	 10을 넣게 되는데 우연히 13번째에 다른 변수가 있다면 그 변수 값이
	 사라져버리고 컴파일오류가 나지 않을수도 있음. 그런 실수를 조심해야함*/
	int iData = 0;



// 구조체

	MYST t = { 100, 3.14f }; // 위에서 int,랑 float로 선언해놨기 때문에 맞게끔 넣어줌
	

	t.a = 10;
	t.f = 10.2314f;

	int iSize = sizeof(MYST); // int, float 2개 이기 때문에 사이즈는 8이 나와야함
	
	return 0;
}