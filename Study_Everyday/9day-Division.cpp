#include <stdio.h>

#include "func.h"
#include "common.h"

// 정적변수
// 움직이지 않는 변수이며 이 파일 안에서만 작용하는 변수임
// 함수 안에 선언하면 함수 안에서만 사용 가능하기 때문에
// 다른 지역이나 메인에서 값을 건들수가 없기 때문에 자료가 변경될 일이 없다.


int Count()
{
	static int i = 0;
	++i;
	
	return i;
}

int main() 
{

	// Add라는 함수를 func.h라는 헤더파일에 가서 확인을 하기 때문에 여기서 선언을
	// 하지 않았어도 오류가 따로 뜨지 않으며 링킹 과정을 통해 func.cpp에 있는 연산 과정을
	// 참조하여 연산이 이루어져서 결국 data에는 연산 결과 값이 들어가게 되는 것이다.
	int data = Add(10, 20);


	// 여기에서 알 수 있는 결과 값은 Static에 넣은 1000은 반영되지 않고 Extern의 500은 반영된다.
	// 그렇다는건 static은 외부에서 값을 건들수 없는 정적 변수인거고
	//  Extern은 외부에서 값을 수정하는게 가능한 외부 변수인 것이다.
	Static = 1000;
	Extern = 500;

	Add(0, 0);

	

	
	Count();
	Count();
	Count();
	Count();
	int Sum_count = Count();
	printf("Extern의 값은 %d 입니다 \n", Sum_count);
	printf("data의 값은 %d \n", data);

	// Count 값은 위에 함수로서 선언을 했고 함수 안에 정적변수로 정리를 했기 때문에
	// Count 의 값은 메인함수에서도 따로 건들수 없음

	



	return 0;
}