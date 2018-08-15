#include<stdio.h>
int main(void)
{
	int i,j;
	int height,width;
	
	puts("让我们来画一个长方形。");
	printf("高:");   scanf("%d",&height);
	printf("宽:");   scanf("%d",&width);
	
	for(i = 1;i <= height;i++) { //长方形有height行 
		for(j = 1;j <= width;j++)  //每行显示width个 
			putchar('*');
		putchar('\n');  //换行
	}
	return 0;	
 } 
