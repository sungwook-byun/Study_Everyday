#include<stdio.h>


int main()
{

	int i = 100;
	
	// ������ �Ҷ��� ��Ʈ���̶�� �˷��ֱ� ���� ��Ʈ�� * �� ���̴°���
	int* pint = &i;

	printf("i�� ���� : %d \n", i);

	// pint�� �ּҷ� �����ڴ� �ǹ̷μ� * �� ����
	*pint = 200;

	// i�� *pint �� ���� ���� ����ϴ°����� ���� �ּҶ�� ���� �� �� �ִ�.
	printf("i�� ���� : %d \n", i);
	printf("*pint�� ���� : %d \n", *pint);

	return 0;
}