#include "func.h"
#include "common.h"
#include <stdio.h>

int Add(int a, int b)
{
	printf("Static �� ���� : %d \n", Static);
	printf("Extern �� ���� : %d \n", Extern);

	return a + b;
}
