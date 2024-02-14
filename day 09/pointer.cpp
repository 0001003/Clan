#include<stdio.h>

int main() {
	
	// 2+3=5 [컴퓨터 : 연산(cpu) + 기억(ram)]
	
	
	//int a = 1;   //메모리에다가 a라는 변수를 만들고 1을 넣겠다는 뜻
	//printf("%d", &a);  //&는 주소 연산자.
	// scanf("%d", &a); 이 모양에서 &를 많이 봤음


	// &s는 주소 연산자 : 변수의 주솟값을 알려줌
	// *는 포인터[간접 참조] 연산자 : 주솟값을 줘봐, 거기에 담긴 값을 읽을게

	/*int* pa; //pa라고 쓰는 게 국룰임
	pa = &a;
	printf("%d", *pa);

	*pa = 7;
	printf("%d", a); // 7이 출력값으로 나옴 왜냐하면 pa 때문에 a에다가 7을 가져다 넣은 것과 다름 없음 */

	int m = 20;
	int* pm; // << 포인터 pm을 선언을 함.
	pm = &m;

	printf("m의 값은 %d:\n", m);
	printf("pm이 가리키는 주소값은 %d:\n", pm);
	printf("pm이 가리키는 포인터값은 %d:\n", *pm);






	return 0;
}