#include<stdio.h>

int main()
{
	//输入一个两位数，不包括7，符合输出1，不符合输出0
	/*printf("请输入一个两位数：");
	int num;
	scanf_s("%d",&num);
	int num1;
	num1 = num % 10;
	int num2;
	num2 = num / 10 % 10;
	printf("%d\n",num1!=7&&num2!=7);*/

	//键盘输入一个两位整数，不包含7且不是7的倍数，符合输出1，不符合输出0
	printf("请输入一个两位整数：");
	int num;
	scanf_s("%d",&num);
	int num1;
	num1 = num % 10;
	int num2;
	num2 = num / 10 % 10;
	int action;
	action = num1 != 7 && num2 != 7;
	printf("%d\n",action&&num%7!=0);
	return 0;
}