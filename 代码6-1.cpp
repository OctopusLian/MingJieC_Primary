#include<stdio.h>
int max(int a,int b)
{
	if(a > b)
		return a;
	else
		return b;
}

int main(void)
{
	int n1,n2;
	puts("����������������");
	printf("����1:"); scanf("%d",&n1);
	printf("����2:"); scanf("%d",&n2);
	
	printf("�ϴ���������ֵ��%d��\n",max(n1,n2));
	
	return 0;
}
