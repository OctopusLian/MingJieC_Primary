#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	if(n == 0)
		puts("������Ϊ0");
	else if(n > 0)
		puts("����");
	else if(n < 0)
		puts("����");
	return 0;
}
