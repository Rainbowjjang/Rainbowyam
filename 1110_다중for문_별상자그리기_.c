#include <stdio.h>


void main() {

    int i, j;
    int width, length;
    // 가로,세로 변수값
    printf("가로와 세로를 입력하시오 : ");
    scanf("%d%d", &width, &length);
    // 임의의 수 가로 세로 값 입력

	for (i = 1; i <= length; i++) {
		for (j = 1; j <= width; j++) {
			if (i == 1 || i == length || j == 1 || j == width){
				// 모서리는 공백없이 출력
				printf("★");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}
}