#include<stdio.h>
int main(void)
{
	int num;
	int i=0;
	printf("��������");
	scanf("%d",&num);
	while (i<num) {
		if (++i%2)
			putchar('+');
		else
			putchar('-');
	}
	return 0;
}
