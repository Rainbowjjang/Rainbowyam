#include<stdio.h>
#define _CRT_SECRUE_NO_WARNINGS

void main() {

	//void main() {
	//
	//	// �Է�
	//	int n;
	//	printf("������ �Է��Ͻÿ� :");
	//	scanf("%d", &n);
	//	printf("�Էµ� �� : %d\n",n);
	//	printf("\n");
	//
	//
	//	while(getchar() != '\n');
	//	// ���������� �Էµ� ���۸� ����� ����
	//	// �������� ���Ͱ� �Էµ����� ����
	//	// �� ���� ������ ���ڸ� �Է��ϼ��� : �Էµ� ���ڴ� : �̷��� �ȳ���
	//	//�ݺ��� ������
	//
	//	char c;
	//	printf("���ڸ� �Է��ϼ��� :");
	//	scanf(" %c", &c);
	//	// �����̽� ������ ���������� �Է��ߴ� ���۰� ���� �־ �پ ����
	//	printf("�Էµ� ���ڴ� : %c\n", c);
	//	printf("\n");
	//
	//	int a, b;
	//	printf("���� �ΰ��� �Է��ϼ��� : \n");
	//	scanf("%d %d", &a, &b);
	//	printf("���� a,b�� ���� ���� %d %d �̴�. \n", a, b);



	int age;
	char name[256];
	char hobby[256];
	char a[256];
	char b[256];


	while (getchar() != '\n');
	{
		printf("�̸� :");
		scanf("%s", name);


		printf("���� :");
		scanf("%d", &age);


		printf("���:");
		scanf("%s", hobby);


		printf("%Ư�� :");
		scanf("%s", a);


		printf("�����ϴ� ���� :");
		scanf("%s", b);
	}
	

	printf("----------------------�Է»���---------------------- \n");
	printf("�̸� : %s \n", name);
	printf("���� : %d \n", age);
	printf("��� : %s \n", hobby);
	printf("Ư�� : %s \n", a);
	printf("���� �ϴ� ���� : %s \n", b);
	printf("---------------------------------------------------- \n");

}



	