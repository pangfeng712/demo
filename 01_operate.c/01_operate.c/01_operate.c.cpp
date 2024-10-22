#include<stdio.h>

int main()
{
	int num;
	printf("请输入一个三位数：");
	scanf_s("%d", &num);
	/*int num1 = num % 100;//第一种方法
	int num2 = num1 % 10;
	printf("个位是：%d\n", num2);
	printf("十位是：%d\n", num1/10);
	printf("百位是：%d\n", num / 100);*/

	//第二种
	int ge = num % 10;
	int shi = num / 10 % 10;
	int bai = num / 100 % 10;
	printf("个位是：%d\n", ge);
	printf("十位是：%d\n", shi);
	printf("百位是：%d\n", bai);
	return 0;
}