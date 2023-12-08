#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

int main()
{

	int Lotto[SIZE] = { };
	int Null = 0;
	int Winning_Number[SIZE] = { 1, 12, 16, 19, 23, 43 };
	int Winning_Bonus = 34;
	int Count_Num = 0;
	int Check_Bonus = 0;

	// ���� �߻�
	srand((int)time(NULL));

	for (int i = 0; i < SIZE; ++i)
	{
		Lotto[i] = (rand() % 45) + 1;
		for (int j = 0; j < i; ++j)
		{
			if (Lotto[i] == Lotto[j])
				--i;
		}
	}

// ���� ������ ���� Lotto[SIZE] ��� ���� 6���� ã�Ƴ�
// �� 6���� ���� ������������ ������ �� ����
	
	for (int j = 0; j < SIZE - 1; ++j)
	{
		for (int i = 0; i < SIZE - 1 - j; ++i)
		{
			if (Lotto[i] > Lotto[i + 1])
			{
				Null = Lotto[i];
				Lotto[i] = Lotto[i + 1];
				Lotto[i + 1] = Null;
			}
		}
	}

	//��� Ȯ�ο�
	printf("���� ��ȣ : ");
	for (int k = 0; k < SIZE; ++k)
	{
		printf("%d  ", Lotto[k]);
	}

	printf("\n��÷ ��ȣ : %d  %d  %d  %d  %d  %d ", 1, 12, 16, 19, 23, 43);
	printf("���ʽ� ��ȣ : %d \n\n", Winning_Bonus);
	for(int j = 0; j < SIZE; ++j)
	{
		for(int i = 0; i < SIZE; ++i)
		{
			if (Lotto[i] == Winning_Number[j])
			{
				++Count_Num;
			}
		}
	}

	
	for (int i = 0; i < SIZE; ++i)
	{
		if (Lotto[i] == Winning_Bonus)
		{
			Check_Bonus = 1;
			break;
		}
	}

	if (Count_Num + Check_Bonus == 6)
		printf("6�� ��� ���߼̽��ϴ�.\n\n");
	else if (Count_Num + Check_Bonus == 5)
		printf("5�� ���߼̽��ϴ�.\n\n");
	else if (Count_Num + Check_Bonus == 4)
		printf("4�� ���߼̽��ϴ�.\n\n");
	else if (Count_Num + Check_Bonus == 3)
		printf("3�� ���߼̽��ϴ�.\n\n");
	else if (Count_Num + Check_Bonus == 2)
		printf("2�� ���߼̽��ϴ�.\n\n");
	else if (Count_Num + Check_Bonus == 1)
		printf("1�� ���߼̽��ϴ�.\n\n");
	else
		printf("�ϳ��� ������ ���ϼ̽��ϴ�.\n\n");


	return 0;
}