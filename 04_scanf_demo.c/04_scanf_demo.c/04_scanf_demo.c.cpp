#include<stdio.h>

int main()
{
	//定义长宽高
	double length;
	double width;
	double height;

	//1.键盘分别输入长宽高三个小数
	/*printf("请输入长方体的长：");
	scanf_s("%lf", &length);
	printf("请输入长方体的宽：");
	scanf_s("%lf", &width);
	printf("请输入长方体的高：");
	scanf_s("%lf", &height);*/
	//2.键盘同时输入长宽高三个小数
	printf("请输入长方体的长、宽、高：");
	scanf_s("%lf %lf %lf",&length, &width, & height);
	//定义面积ABC
	double areaA = length * width;
	double areaB = width * length;
	double areaC = length * height;
	//1.打印出ABC的面积
	printf("A面的面积是：%.2lf，B面的面积是：%.2lf，C面的面积是：%.2lf", areaA, areaB, areaC);
	//2.分别打印出面积ABC
	/*printf("A面的面积是：%.2lf\n", length * width);
	printf("B面的面积是：%.2lf\n", width * length);
	printf("C面的面积是：%.2lf\n", length * height);*/
	//定义长方体的体积
	double bulk = length * width * height;
	//打印出长方体的面积
	printf("长方体的体积为：%.2lf\n", bulk);
	return 0;
}