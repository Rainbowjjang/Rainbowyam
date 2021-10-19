#include<stdio.h>

void main() {
	printf("**********************\n");
	printf("A ---- Add\n");
	printf("S ---- Subtract\n");
	printf("M ---- Multiply\n");
	printf("D ---- Divide\n");
	printf("Q ---- Quit\n");
	printf("**********************\n");

	int x, y;
	char c;
	// char 문 단일문자 부여

	do
		// do while 문 : 종속문장을 무조건 한번 실행시키고 while(조건식) 평가함
	{
		printf("연산을 선택하시오 : ");
		scanf("%c",&c);
		// 단일문자 사용시 & 사용
		// 임의의 단일 문자값을 받음

		if (c == 'A') 
			// else if : 조건식이 두개 이상일 경우 사용하며 모든 조건중 하나의 종속문장만 실행
			// 단일 문자 'A'를 받았을 경우
		{
			// 스탬프 시작 (A라는 단어를 받았을 경우에만 아래 코드 실행)
			printf("두수를 공백으로 분리하여 입력하시오 : ");
			scanf("%d %d", &x, &y);
			// 임의의 값 2개를 지정받고 x와 y값에 넣어준다
			printf("%d", x + y);
			// 출력되는 값은 x+y의 값
			break;
			// 빠쪄나옴
		}
		// 스탬프 종료 (A라는 단어의 코드를 실행했으니 빠져나옴
		else if (c == 'S') 
			// 단일 문자 'S'를 받았을 경우
		{
			printf("두수를 공백으로 분리하여 입력하시오 : ");
			scanf("%d %d", &x, &y);
			// 임의의 값 2개를 지정받고 x와 y값에 넣어준다
			printf("%d", x - y);
			break;
		}
		else if (c == 'M') 
		{
			printf("두수를 공백으로 분리하여 입력하시오 : ");
			scanf("%d %d", &x, &y);
			// 임의의 값 2개를 지정받고 x와 y값에 넣어준다
			printf("%d", x * y);
			break;
		}
		else if (c == 'D')
		{
			printf("두수를 공백으로 분리하여 입력하시오 : ");
			scanf("%d %d", &x, &y);
			// 임의의 값 2개를 지정받고 x와 y값에 넣어준다
			printf("%d", x / y);
			break;
		}
		else if (c == 'Q')
		{
			// 단일문자 'Q' 를 받았을 경우 밑 브레이크 문이 실행되어 빠져나온다
			break;
		}
	} 
	while (1);

}

