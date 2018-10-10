#include<stdio.h>
int main(void)
{
	int n;
	do{
		printf("请输入一个正整数:");
		scanf("%d",&n);
		if(n <= 0)
			puts("请不要输入非正整数。");
	}while(n <= 0);
	
	printf("该整数逆向显示的结果是 ");
	while(n > 0){
		printf("%d", n % 10);
		n /= 10;
	}
	puts("。 ");
	
	return 0;	
}
