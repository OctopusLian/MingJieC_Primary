#include<stdio.h>

int sump(int n)
{
	int sum = 0;
	do{
		sum += n;	
	}while(n-- > 0);
	return sum;	
}

int main(void)
{
	int m;
	scanf("%d",&m);
	printf("1��%d֮��ĺ�Ϊ%d",m,sump(m));
	
	return 0;
}
