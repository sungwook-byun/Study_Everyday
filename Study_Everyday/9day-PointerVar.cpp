#include <stdlib.h>
#include <stdio.h>

void Test(int* a)
{
	// �Լ��� ����Ǹ� ������ ����� ���̱� ������ ������ main �Լ����� Test�Լ��� �ҷ��͵� a ���� ������ �ȵ�
	*a = 500;
}


int main()
{
	// ������ ����
	// �ڷ��� ������
	int* pInt = nullptr;

	// �ּҸ� ����
	char* pChar = nullptr; // pChar�� ����� �ּҰ��� char�� ���ڴٴ� �ǹ����� pChar�� char Ÿ���̶�� �ǹ̰� �ƴ�
	short* pShort = nullptr; // �׷��� ������ �ȿ� ����� ���� ���� ����� ����. ���ڴٰ� ������ Ÿ���� �����ϴ´�� ���� ���ϻ���

	// ������ ������ ũ��� 8 ����Ʈ�̴�. (64��Ʈ ��ǻ�� �� ���)
	int iSize = sizeof(pInt);

	int i = 0;
	pInt = &i;
	pInt += 1;

	// pInt sms int* �����̱� ������, ����Ű�� ���� int�� �ؼ��Ѵ�.
	// ���� �ּҰ��� 1 �����ϴ� �ǹ̴� ���� int ��ġ�� �����ϱ� ���ؼ� sizeof(int) ������ �����ϰ� �ȴ�.

	// �����Ϳ� �迭
	// �迭�� Ư¡
	// 1. �޸𸮰� �������� �����̴�.
	// 2. �迭�� �̸��� �迭�� ���� �ּ��̴�.
	int iArr[10] = {};
	
	// int ������ ����
	*(iArr + 0) = 10; // iArr[0] = 10;
	*(iArr + 1) = 10; // iArr[1] = 10;


	// ���� 1

	short sArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int* pI = (int*)sArr;

	int iData = *((short*)(pI + 2));

	printf("1�� ���� ���� : %d \n", iData);


	// ���� 2
	char cArr[2] = { 1, 1 };

	short* pS = (short*)cArr;

	iData = *pS;

	printf("2�� ���� ���� : %d \n", iData);

	//

	int a = 100;
	Test(&a);
	printf("a�� ���� : %d \n", a);

	return 0;
}