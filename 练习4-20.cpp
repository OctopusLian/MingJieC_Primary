#include <stdio.h>
int main()
{
	int i, j ;
	//打印第一行
	printf("   |") ;
	for(i = 1; i <= 9; i++)
	{
		printf("  %d", i) ;
	}
	printf("\n") ;
	//打印第二行
	for(i = 1; i <= 32; i++)
		printf("-") ;
	printf("\n") ;
	//开始打印99乘法表，每行开头要有行号
	for(i = 1; i <= 9; i++)//行
	{
		printf(" %d |", i) ;
		for(j = 1; j <= 9; j++)//列
		{
			printf(" %2d", i*j) ;
		}
	printf("\n") ;
	}
	return 0 ;
}
