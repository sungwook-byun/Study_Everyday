#include "func.h"
#include "common.h"
#include <stdio.h>

int Add(int a, int b)
{
	printf("Static 의 값은 : %d \n", Static);
	printf("Extern 의 값은 : %d \n", Extern);

	return a + b;
}
