#include<stdio.h>
int sqr(int x)
{
	return x * x;  //����x��ƽ�� 
 } 
 
int diff(int a)
{
	return sqr(a) * sqr(a);  //��ֵ��ȥСֵ����֤���Ϊ�� 
}

int main(void)
{
	int x;
	puts("������һ��������");
	printf("����x��"); scanf("%d",&x);
	
	printf("x���Ĵ�����%d��\n",diff(x));
	
	return 0; 
}
