#include<stdio.h>
int main()
{
	printf("ÇëÊäÈëÕûÊı:");
	int a;
	scanf("%d",&a);
	int b=0;
	for(int i=0;i<a;i++)
	{
    	if(b==5)
    	{
        	printf("\n");
        	b=0;
    	}
    printf("*");
    b=b+1;
	}	
 } 

