
#include <stdio.h> // ǥ�� ����� �Լ��̸� �����ؾ����� printf �� scanf �� �� �� ����


int main()
{

	//�ݺ���
//	for (/*�ݺ��� �ʱ�ȭ*/; /*�ݺ��� ���� üũ*/; /*�ݺ��� ����*/)

	//for (int i = 0; i < 5; ++i)
	//{
	//	if (i % 2 == 0)
	//	{
	//		continue; // ���� �������� ��
	//	}
	//	printf("i�� ���� %d\n", i);
	//	break; // �ٷ� �ݺ����� ���߰� �ؼ� ���� ���߰� ��
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
		printf("i�� ���� : %d \n", i);
	}

	// scanf
	int data = 0;
	scanf_s("%d", &data);




	//while()
	
	//int i = 0;
	//while (i < 2)
	//{
	//	printf("i�� ����\n", i);

	//	++i;
	//}



	return 0;
}