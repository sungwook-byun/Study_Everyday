#include<stdio.h>


int main()
{

	int i = 100;
	
	// 선언을 할때는 인트형이라고 알려주기 위해 인트에 * 를 붙이는것임
	int* pint = &i;

	printf("i의 값은 : %d \n", i);

	// pint의 주소로 가보자는 의미로서 * 이 붙음
	*pint = 200;

	// i랑 *pint 는 같은 값을 출력하는것으로 같은 주소라는 것을 알 수 있다.
	printf("i의 값은 : %d \n", i);
	printf("*pint의 값은 : %d \n", *pint);

	return 0;
}