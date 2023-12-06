#pragma once


// 정적 변수
static int Static = 0;

// 외부 변수
// 0으로 초기화를 한다거나 값을 주는게 아니라 그냥 이런 변수가 있다는 사실만 선언함
// 여기서나 헤더파일에서는 값을 주면 안된다
// 다른 cpp 어떤 파일에서든 int Extern = 값 을 주면 링킹 과정을 통해 값이 들어가게 된다

extern int Extern;