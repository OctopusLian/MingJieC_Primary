#include<stdio.h>
int sqr(int x)
{
	return x * x;  //����x��ƽ�� 
 } 
 
int diff(int a,int b)
{
	return (a > b ? a - b : b - a);  //��ֵ��ȥСֵ����֤���Ϊ�� 
}

int main(void)
{
	int x,y;
	puts("����������������");
	printf("����x��"); scanf("%d",&x);
	printf("����y��"); scanf("%d",&y);
	
	printf("x��y��ƽ������%d��\n",diff(sqr(x),sqr(y)));
	
	return 0; 
}
