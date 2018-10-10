#include<stdio.h>
int main()
{
	int a,b,n;
	scanf("%d %d",&a,&b);
	(a>b)?n=a-b:n=b-a;
	if(n>10)
		printf("差值大于11");
	else
		printf("差值小于等于10");
	return 0;
}
