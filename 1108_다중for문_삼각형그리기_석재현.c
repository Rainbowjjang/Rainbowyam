#include<stdio.h>

// 삼각형 그리기

void main() {

int Height;
// 높이 변수 

printf("높이 입력 :");
scanf("%d", &Height);
// 높이 변수에 임의의 수를 입력

for (int i = 1; i <= Height; i++) {
    // i는 임의의 수를 받은 높이값보다 작거나 같다 , i값 1 + 
    // i값이 높이값보다 작거나 같을 경우 밑 for문 실행
    for (int j = 1; j <= i; j++) 
        // j는 i보다 작거나 같을 경우 printf문 실행
        // 1.높이 변수에 임의의 수를 받음 ex : 10
        // 2.i는 1이고 높이 변수는 10이니 밑 코드 (안쪽 for문) 실행
        // 3. 10보다 작거나 같을 경우 빠져나옴
        printf("★");
    printf("\n");
 }
}