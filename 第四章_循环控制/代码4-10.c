#include<stdio.h>
int main(void)
{
	int n;
	do{
		printf("������һ��������:");
		scanf("%d",&n);
		if(n <= 0)
			puts("�벻Ҫ�������������");
	}while(n <= 0);
	
	printf("������������ʾ�Ľ���� ");
	while(n > 0){
		printf("%d", n % 10);
		n /= 10;
	}
	puts("�� ");
	
	return 0;	
}
