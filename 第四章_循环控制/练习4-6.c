#include<stdio.h>
int main(void)
{
	int i,n;
	printf("������һ��������:");
	scanf("%d",&n);
	i = 0;
	while(i <= n){
		i = i + 2;
		if(i < n)  //Ӧ�ȶԵ������ֵ�����жϣ����Ƿ�Խ�� 
		printf("%d ",i); 		
	}

	printf("\n");
	
	return 0; 
 } 
