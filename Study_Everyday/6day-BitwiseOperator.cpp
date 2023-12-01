#include<stdio.h>

#define HUNGRY 1
#define THIRSTY 2
#define TIRED 4
#define COLD 8
#define HOT 16

// �Լ� Factorial
// 4! �̶�� ���� �� ��
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

	// ��Ʈ ��(&), ��(|), xor(^), ����(~)
	// ��Ʈ������ ������ ����
	// & �Ѵ� 1�� ��� 1
	// | �� �� �ϳ��� 1�̸� 1
	// ^ ������ 0, �ٸ��� 1
	// ~ 1�� 0����, 0�� 1��
	unsigned int iStatus = 0;

	iStatus |= HUNGRY; // ��׸��� ���¸� iStatus�� ��Ʈ�� ��ġ�ڴٴ� �ǹ�
	iStatus |= THIRSTY;
	iStatus |= COLD;

	if (iStatus & THIRSTY)
	{
		printf("�񸶸� ���� �Դϴ�.\n");
	}

	if (iStatus & HUNGRY)
	{
		printf("����� ���� �Դϴ�.\n");
	}

	// Ư�� �ڸ� ��Ʈ ����
	iStatus &= ~COLD;
	//������ ���Ÿ� �߱� ������ ���°� Ǯ���� ����� �ȵ�.
	if (iStatus & COLD) 
	{
		printf("�߿� ���� �Դϴ�.\n");
	}

}

