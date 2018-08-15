#include<stdio.h>
int main(void)
{
	int i,n;
	printf("请输入一个正整数:");
	scanf("%d",&n);
	i = 0;
	while(i <= n)
		printf("%d ",i++);  //i的值在显示之后递增
	printf("\n");
	
	return 0; 
 } 
