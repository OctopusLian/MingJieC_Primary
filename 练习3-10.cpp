#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c)
		printf("三个相等");
	else if(a != b && b != c && c != a )
		printf("三个不相等");
	else
		printf("两个相等");
	return 0;
 } 
