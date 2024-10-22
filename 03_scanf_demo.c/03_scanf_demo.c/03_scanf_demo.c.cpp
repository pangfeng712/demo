#include<stdio.h>

int main()
{
	/*int num1, num2;
	printf("请输入第一个数字：");
	scanf_s("%d", &num1);
	printf("请输入第二个数字：");
	scanf_s("%d", &num2);
	printf("这两个数的和为：%d", num1 + num2);*/
	/*int num1,num2;*/
	//printf("请输入两个数字：");
	//scanf_s("%d %d", &num1, &num2);
	//int sum = num1 + num2; 应先赋值后再定义sum
	//printf("两个数的和为：%d\n", sum);
	char name[100];
	int age;
	int height;
	printf("请输入您的名字:");
	scanf_s("%s", name,100);
	printf("请输入您的年龄:");
	scanf_s("%d", &age);
	printf("请输入您的身高(米):");
	scanf_s("%d", &height);
	/*scanf_s("%s %d %d", &name, &age, &height);*/
	printf("我的名字是：%s,年龄为：%d岁,身高为：%d米。", name,age,height);
	return 0;
}