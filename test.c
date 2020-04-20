#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//数据类型，向空间申请sizeof（）空间，单位byte

	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	return 0;
}
int main()
{
	int num1= 0;//整型向空间申请4字节=32bit，用来存放num1
	int num2 = 0;
	printf("请输入两个数:>");
	int sum = 0;
	scanf("%d %d", &num1,&num2);
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}
