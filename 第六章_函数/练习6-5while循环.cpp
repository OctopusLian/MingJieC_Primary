#include<stdio.h>

int sump(int n)
{
	int sum = 0;
	++n;
	while(n-- > 0)
		sum += n;
	return sum;	
}

int main(void)
{
	int m;
	scanf("%d",&m);
	printf("1��%d֮��ĺ�Ϊ%d",m,sump(m));
	
	return 0;
}
