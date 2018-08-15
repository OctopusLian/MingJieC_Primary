#include<stdio.h>
int sqr(int x)
{
	return x * x;  //返回x的平方 
 } 
 
int diff(int a,int b)
{
	return (a > b ? a - b : b - a);  //大值减去小值，保证结果为正 
}

int main(void)
{
	int x,y;
	puts("请输入两个整数。");
	printf("整数x："); scanf("%d",&x);
	printf("整数y："); scanf("%d",&y);
	
	printf("x和y的平方差是%d。\n",diff(sqr(x),sqr(y)));
	
	return 0; 
}
