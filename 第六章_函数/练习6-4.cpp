#include<stdio.h>
int sqr(int x)
{
	return x * x;  //返回x的平方 
 } 
 
int diff(int a)
{
	return sqr(a) * sqr(a);  //大值减去小值，保证结果为正 
}

int main(void)
{
	int x;
	puts("请输入一个整数。");
	printf("整数x："); scanf("%d",&x);
	
	printf("x的四次幂是%d。\n",diff(x));
	
	return 0; 
}
