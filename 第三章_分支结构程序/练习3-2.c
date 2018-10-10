#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	if(n == 0)
		puts("该整数为0");
	else if(n > 0)
		puts("正数");
	else if(n < 0)
		puts("负数");
	return 0;
}
