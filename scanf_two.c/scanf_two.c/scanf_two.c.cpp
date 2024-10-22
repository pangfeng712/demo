#include<stdio.h>

int main()
{
	char name[999];
	printf("你女朋友的名字是：");
	scanf("%s", &name); 
	printf("她的名字是：%s\n",name);
	printf("%zu\n", sizeof(name));
	int age;
	printf("Your age:");
	scanf("%d", &age);
	printf("My age:%d\n", age);
	return 0;
}