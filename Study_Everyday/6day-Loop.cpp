
#include <stdio.h> // 표준 입출력 함수이며 구현해야지만 printf 나 scanf 를 쓸 수 있음


int main()
{

	//반복문
//	for (/*반복자 초기화*/; /*반복자 조건 체크*/; /*반복자 변경*/)

	//for (int i = 0; i < 5; ++i)
	//{
	//	if (i % 2 == 0)
	//	{
	//		continue; // 값을 지나가게 함
	//	}
	//	printf("i의 값은 %d\n", i);
	//	break; // 바로 반복문의 멈추게 해서 값을 멈추게 함
	//}

	//for (int i = 5; i > 0; i--)
	//{
	//	for(int j=0; j < i; j++)
	//	{
	//	printf("*");
	//	}
	//	printf("\n");
	//}
	for (int i = 1; i < 5; ++i)
	{
		printf("i의 값은 : %d \n", i);
	}

	// scanf
	int data = 0;
	scanf_s("%d", &data);




	//while()
	
	//int i = 0;
	//while (i < 2)
	//{
	//	printf("i의 값은\n", i);

	//	++i;
	//}



	return 0;
}