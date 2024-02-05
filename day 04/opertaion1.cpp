// Operator [연산자]

// 산술 연산자
// 대입 연산자
// 비교 연산자
// 논리 연산자
// ----------------
// 증감 연산자
// - 

#include<stdio.h>

int main() {

	// 증감 연산자
	// ++, --
	int a = 1;
	a++; //숫자 1만큼 증가한 것
	a++; // 3이 나온다
	printf("a: %d\n", a);

	a--; // 2가 나온다
	printf("a: %d\n", a);

	int b = 0;
	printf("b: %d\n", b++); 
	// 증감 연산자는 최후로 연산이 됨. 프린트b를 먼저 보여주고, 한 번 더 printb를 했을 때 b++ 값이 나온다.
	printf("b: %d\n", b);
	//아니? 나는 먼저 b에 ++한 걸 우선 순위로 하고 싶음 먼저 보여줬음 좋겠음
	printf("b: %\n", ++b);

	// ++b: 전위 연산자
	// b++: 후위 연산자

	int c = 0;
	printf("c: %d\n", ++c); //1
	printf("c: %d\n", c++); //1
	printf("c: %d\n", ++c); //3




	// 삼항 연산자()
	// (조건) ? 참 값 : 거짓 값

	// 유저가 알파벳을 입력하고
	// 대문자이면 숫자 1을 출력 아니면 0을 출력하는 프로그램 만들기

	/*char alpha;

	printf("문자 입력 :");
	scanf("%c", &alpha);
	
	char
		int */  // 아스키코드 들어가기까지 함

	char a;
	printf("알파벳 입력 :");
	scanf("%c", &a);
	getchar();

	// 아스키코드 65-90 사이이면 대문자
	int isCapital = 65 <= a && a >= 90 ? 1 : 0;
	printf("결과: %d", isCapital);
	

	// 유저가 문자 하나를 입력하고
	// 알파벳이면 숫자 1을 출력 아니면 0 출력

	/*char alpha;
	printf("문자 입력 :");
	scanf("%c", &alpha);

	int is

		65 >= alpha && 90 <= alpha, 97 >= alpha && 122 <= alpha*/

	//// 답
	//char b;
	//printf("문자 입력 :");
	//scanf("%c", b);

	//int isAlphabet = (65 <= b && b <= 90) || (98 <= b && b <= 122) ? 1 : 0;
	//printf("결과 : %d", isAlphabet);



	//// 뭔가 줄이고 싶지 않니

	//int isCapital = (65 <= b && b <= 90);
	//int isLower = (98 <= b && b <= 122);
	//int isAlphabet = isCapital || isLower;
	//int result = isAlphabet ? 1 : 0;
	//printf("결과 : %d", result);

	

	// 콤마 연산자
	int a, b;


	//sizeof 연산자
	// + ) int - 4byte, float - 4byte, double - 8byte, char - 1byte

	// 인간 : 연산 + 기억 동시 가능
	// 컴퓨터 : 연산(cpu)이랑 기억(ram) 따로 함

	// 요즘 컴퓨터 RAM - 16GB
	// int = 4byte 차지


	
	// 컴퓨터에서 가장 작은 단위
	
	// 1bit
	// 8bit = 1byte
	// 1024byte = 1kb
	// 1024kb = 1mb
	// 1024mb = 1gb

	// 1bit 전구가 있다고 합시다. 이 전구는 켜지고 꺼지는 것 밖에 안 됨.
	// 1byte는 전구가 8개가 있는 것. 표현 수단이 2^8개.

	// int 4byte = 32bit = 2 ^ 32 (0  ~  +-2^31) << 이 수 이상으로 int에 숫자가 담기지 않는다.


	//int m;
	//printf("사이즈 m: %d\n", sizeof(m)); // 이 변수의 크기가 얼마니?
	//// 사이즈 : 4 << 이렇게 나온다.



	// type casting(형 변환)
	int n = 10;
	double k = (double)n;







	return 0;
}
