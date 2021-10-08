#include<stdio.h>
#define _CRT_SECRUE_NO_WARNINGS

void main() {

	//void main() {
	//
	//	// 입력
	//	int n;
	//	printf("정수를 입력하시오 :");
	//	scanf("%d", &n);
	//	printf("입력된 값 : %d\n",n);
	//	printf("\n");
	//
	//
	//	while(getchar() != '\n');
	//	// 마지막으로 입력된 버퍼를 뱉어내라는 문구
	//	// 마지막에 엔터가 입력됐으니 지움
	//	// 이 문구 있으면 문자를 입력하세요 : 입력된 문자는 : 이렇게 안나옴
	//	//반복문 없애줌
	//
	//	char c;
	//	printf("문자를 입력하세요 :");
	//	scanf(" %c", &c);
	//	// 스페이스 누르는 마지막으로 입력했던 버퍼가 남아 있어서 붙어서 나옴
	//	printf("입력된 문자는 : %c\n", c);
	//	printf("\n");
	//
	//	int a, b;
	//	printf("정수 두개를 입력하세요 : \n");
	//	scanf("%d %d", &a, &b);
	//	printf("정수 a,b의 값은 각각 %d %d 이다. \n", a, b);



	int age;
	char name[256];
	char hobby[256];
	char a[256];
	char b[256];


	while (getchar() != '\n');
	{
		printf("이름 :");
		scanf("%s", name);


		printf("나이 :");
		scanf("%d", &age);


		printf("취미:");
		scanf("%s", hobby);


		printf("%특기 :");
		scanf("%s", a);


		printf("현재하는 게임 :");
		scanf("%s", b);
	}
	

	printf("----------------------입력사항---------------------- \n");
	printf("이름 : %s \n", name);
	printf("나이 : %d \n", age);
	printf("취미 : %s \n", hobby);
	printf("특기 : %s \n", a);
	printf("현재 하는 게임 : %s \n", b);
	printf("---------------------------------------------------- \n");

}



	