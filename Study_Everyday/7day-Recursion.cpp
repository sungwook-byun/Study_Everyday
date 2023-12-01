#include <stdio.h>

int Factorial(int _iNum)
{
	int iValue = 1;

	for (int j = 0; j < _iNum - 1; ++j)
	{
		iValue *= (j + 2);
	}

	return iValue;
}

int Factorial_Re(int _iNum)
{
	// �Լ� Ż�ⱸ�� ����� ���� ������ �����÷ο찡 ��
	if (1 == _iNum)
	{
		return 1;
	}

	return _iNum * Factorial_Re(_iNum - 1); // �ڿ��� ���丮���� ���ؾ� �ϴϱ� �ٽ� �Լ��� �ҷ�����
}

// �Ǻ���ġ ����
// 1 1 2 3 5 8 13 21 34 55 .....

int Fibonacci(int _iNum)
{
	if (1 == _iNum || 2 == _iNum)
	{
		return 1;
	}

	int iPrev1 = 1;
	int iPrev2 = 1;
	int iValue = 0;

	for (int j = 0; j < _iNum - 2; ++j)
	{
		iValue = iPrev1 + iPrev2;
		iPrev1 = iPrev2;
		iPrev2 = iValue;

		return iValue;
	}
}


int Fibonacci_Re(int _iNum)
{
	int iPrev1 = 1;
	int iPrev2 = 1;
	int iValue = 0;

	if (1 == _iNum)
	{
		return 1;
	}

	return _iNum + Fibonacci_Re(_iNum) - ;
}



int main()
{
	int iValue = Factorial(10);
	iValue = Factorial(5);

	iValue = Factorial_Re(5);
	iValue = Fibonacci(3);


	return 0;
}