#include<stdio.h>

int sump(int n)
{
	int sum = 0;
	for(int i = 1;i <= n;i++)
		sum += i;
	return sum;
}

int main(void)
{
	int m;
	scanf("%d",&m);
	printf("1到%d之间的和为%d",m,sump(m));
	
	return 0;
}
