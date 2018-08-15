#include<stdio.h>
int main(void)
{
	int i,n;
	printf("请输入一个正整数:");
	scanf("%d",&n);
	i = 0;
	while(i <= n){
		i = i + 2;
		if(i < n)  //应先对递增后的值进行判断，看是否越界 
		printf("%d ",i); 		
	}

	printf("\n");
	
	return 0; 
 } 
