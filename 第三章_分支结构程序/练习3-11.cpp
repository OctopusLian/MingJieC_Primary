#include<stdio.h>
int main()
{
	int a,b,n;
	scanf("%d %d",&a,&b);
	(a>b)?n=a-b:n=b-a;
	if(n>10)
		printf("��ֵ����11");
	else
		printf("��ֵС�ڵ���10");
	return 0;
}
