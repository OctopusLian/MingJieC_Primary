#include<stdio.h>
int main()
{
	int i,j,n;
    puts("�����������һ����������");
    printf("�������м���:"); scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n-i;j++)
			printf(" ");
		for(j=1;j<2*i;j++)
			printf("%d",i);
		printf("\n");
	}
	return 0;
}
