
#define HUNGRY   0x01 // 1
#define THIRSTY  0x02 // 2
#define TIRED    0x04 // 4
#define FIRE     0x08 // 8
#define COLD     0x10 // 16
#define POISON   0x20 // 32
#define POISON1  0x40 // 64
#define POISON2  0x80 // 128
#define POISON3  0x100 // 256
#define POISON4  0x200 // 512

int main()
{


	// 비교 연산자
	// ==, !=, <, >, <=, >=
	// 참(1), 거짓(0)을 알려줌


	// 구문
	// if, else

	int data = 0;

	if (0 && 200) // 거짓
	{
		data = 100; 
	}
	// 위에 구문이 거짓이기 때문에 data에는 100이 들어가지 않음

	/* 그렇다면 아래 구문은 실행되지 않기 때문에 지워도 되는거 아닌가
	    싶지만 나중에는 가변적인 반응형 if문을 쓰기 때문에 상관이 있음 */
	if (data == 100)
	{
		// if가 참인 경우 수행
	}
	else if(100)
	{
		// if가 거짓인 경우 수행
	}
	else
	{
		// else는 마지막에 수행일 경우 쓰지만 안쓰고 else if만 써도 됨
	}

	int data2 = 10;
	switch(data2)
	{
		case 10:

			break;

		case 20:

			break; // 브레이크가 없으면 디폴트까지 진행하고 종료함

		default:

			break;
	}

	// 삼항 연산자
	// :?

	data == 0 ? data = 100 : data = 200; // data가 0이면 100, 0이 아니면 200 
	
	// 삼항 연산자를 조건문으로 표현하면 이렇게 됨
	// 가독성 때문에 삼항 연산자를 잘 쓰지는 않음
	if (data == 0)
	{
		data = 100;
	}
	else
	{
		data = 200;
	}


	// 비트 연산자
	// 쉬프트 <<, >>
	unsigned char byte = 1;

	byte = byte << 1; // 대입 연산자를 같이 쓰면 아래처럼 됨
	/*
	0 0 0 0   0 0 0 1  여기에서 왼쪽으로 1칸 민다
	0 0 0 0   0 0 1 0  한칸 밀려나서 2 값이 나옴
	*/
	byte <<= 3; // 2^n 배수

	byte >>= 2; // 2^n 나눈 몫

	// 비트 곱(&), 합(|) , xor(^), 반전(~)
	// 비트단위로 연산을 진행,
	// & 둘다 1인 경우 1
	// | 둘 중 하나라도 1이면 1
	// ^ 같으면 0, 다르면 1
	// ~ 1은 0으로, 0은 1로

	unsigned int istatus = 0;

	// 상태 추가
	istatus |= HUNGRY;
	istatus |= THIRSTY;

	// 상태 확인
	if (istatus & THIRSTY)
	{

	}

	// 특정 자리 비트 제거
	istatus &= ~THIRSTY;

	return 0;
}