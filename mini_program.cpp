#include<stdio.h>

int main() {

	int year;
	
	printf("태어난 년도 입력 : \n");
	scanf("%d", &year);
	printf("당신의 만 나이는 %d 입니다\n", 2024-year);


	double num1;
	double num2;
	double num3; // double a,b,c 이렇게 써서 단축화 시켜도 된다

	//printf("세 개의 수 입력:");
	//scanf("%lf %lf %lf, &num1, &num2, &num3);			<< 출력 버전도 스페이스바 맞춰서 써 줘야 함
	
	printf("첫 번째 수 입력 :");
	scanf("%lf", &num1);
	printf("두 번째 수 입력 :");
	scanf("%lf", &num2);
	printf("세 번째 수 입력 :");
	scanf("%lf", &num3);
	printf("세 수의 평균은 %.2lf입니다.", (num1 + num2 + num3) / 3);



	double degree;
		printf("섭씨 온도 입력 : \n");
		scanf( "%lf", &degree);
		printf("화씨 온도는 %.2lf입니다.\n", degree * 5.9 + 32);



		double cm;
		printf("키 입력 : \n");
		scanf("%lf", &cm);
		double kg;
		printf("몸무게 입력 : \n");
		scanf("%lf" , &kg);

		printf("BMI는 %lf 입니다.\n", kg / (cm * cm));


		/*double cm, kg;
		printf("키와 몸무게 입력 : \n");
		scanf("%lf %lf", &cm, &kg);
		printf("BMI는 %lf입니다.\n", kg / (cm * cm));*/  //  << 간략화 시킴

		




	return 0;
}

