#include<stdio.h>

int scan_pint(void)
{
	int tmp;
	do{
		printf("������һ����������");
		scanf("%d",&tmp);
		if(tmp <= 0)
			puts("\a�벻Ҫ�������������");
	}while(tmp <= 0);
	return tmp;
}

int rev_int(int num)
{
	int tmp = 0;
	
	if(num > 0){
		do{
			tmp = tmp * 10 + num % 10;
			num /= 10;
		}while(num > 0);		
	}
	return tmp;
}

int main(void)
{
	int nx = scan_pint();
	printf("��������ת���ֵ��%d��\n",rev_int(nx));
	return 0;
}
