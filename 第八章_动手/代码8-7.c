#include<stdio.h>

int factorial(int n)
{
	if(n > 0)
		return n * factorial(n - 1);
	else
		return 1;
}

int main(void)
{
	int num;
	
	printf("请输入一个整数：");
	scanf("%d",&num);
	
	printf("%d的阶乘为%d。\n",num,factorial(num));
	
	return 0;
}
