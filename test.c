#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//�������ͣ���ռ�����sizeof�����ռ䣬��λbyte

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
	int num1= 0;//������ռ�����4�ֽ�=32bit���������num1
	int num2 = 0;
	printf("������������:>");
	int sum = 0;
	scanf("%d %d", &num1,&num2);
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}
