#include<stdio.h>
int min(int a,int b)
{
	if(a > b)
		return b;
	else
		return a;
}

int main(void)
{
	int n1,n2;
	puts("����������������");
	printf("����1:"); scanf("%d",&n1);
	printf("����2:"); scanf("%d",&n2);
	
	printf("��С��������ֵ��%d��\n",min(n1,n2));
	
	return 0;
}
