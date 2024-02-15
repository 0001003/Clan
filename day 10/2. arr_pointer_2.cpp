#include<stdio.h>

int main() {

	int arr[5] = { 3,6,9,12,15 };
	int* ptr;
	ptr = arr;

	printf("%d\n", arr); // 애초에 폼 자체가 주솟값을 알려주는 폼임
	printf("%d\n", &arr);
	printf("%d\n", &arr[0]); // 세 개의 값이 다 똑같음

	printf("%d\n", *ptr);
	printf("%d\n", *ptr + 1); //3에다가 1을 더하라는 뜻
	printf("%d\n", *(ptr + 1)); // ptr에 한 칸 더가라는 뜻. 그러니까 [0] > [1]번째로 더 가라는 뜻. 따라서 6이 나옴

	for (int i = 0; i < 5; i++) {
		*(ptr + 1) = i; // 0 1 2 3 4가 나옴. 그냥 arr에 들어 있는 것의 위치를 알려주는 게 출력 됨. 0번째, 1번째, 2번째.. 이렇게 그냥 위치를 알려주는 것.
						// arr;로 해도 가능함. 그냥 위치를 알려주는 거라서 안에 수가 있어도 그만 없어도 그만임.
	}


	int matrix[2][3] = {
		{2,4,6},
		{8,10,12},
	};

	matrix[0][0]; //2
	matrix[0][1]; //4

	matrix[0]; // 첫번째 '행'의 주솟값
	matrix[1]; // 두번째 '행'의 주솟값

	printf("%d\n", matrix); // matrix[0]의 주솟값과 같다. 왜냐하면 첫번째, 시작점이니까.
	printf("%d\n", matrix[0]); // 첫번째 '행'의 주솟값
	printf("%d\n", matrix[1]); // 두번째 '행'의 주솟값
	
	
	// for과 포인터를 사용해서 matrix 행렬 출력해보기
	int* p;
	p = &matrix[0][0];
	for (int i = 0; i < 6; i++); {
		printf("%d", *(p + i)); // 안되는데 이따 여쭤보기

	}
	

	int(*p1)[3]; // 3칸을 갖는 배열 포인터
	p1 = &matrix[0]; // 첫번째 행을 지목시킴
	for (int i = 0; i < 3; i++); {
		printf("%d", (*p1)[i]);
	}



	//int* p; //그냥 포인터.
	//p = &matrix; // 이거는 안 된다. 왜 안되냐면
	
	int(*p)[3];
	p = &matrix[0];










	return 0;
}