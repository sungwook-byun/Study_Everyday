
int Add(int a, int b)
{
	return a + b;
}

int main()
{
	// 변수
	// 1. 지역변수 (함수 안에 선언)
	// 2. 전역변수 (함수 밖에 선언)
	// 3. 정적변수
	// 4. 외부변수

	// 함수
	int data = Add(10, 30);
	int data2 = data + data;
	

	return 0;
}