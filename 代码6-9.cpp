#include<stdio.h>

int scan_pint(void)
{
	int tmp;
	do{
		printf("请输入一个正整数：");
		scanf("%d",&tmp);
		if(tmp <= 0)
			puts("\a请不要输入非正整数。");
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
	printf("该整数倒转后的值是%d。\n",rev_int(nx));
	return 0;
}
