#include <stdio.h>
int main()
{
	int i, j ;
	//��ӡ��һ��
	printf("   |") ;
	for(i = 1; i <= 9; i++)
	{
		printf("  %d", i) ;
	}
	printf("\n") ;
	//��ӡ�ڶ���
	for(i = 1; i <= 32; i++)
		printf("-") ;
	printf("\n") ;
	//��ʼ��ӡ99�˷���ÿ�п�ͷҪ���к�
	for(i = 1; i <= 9; i++)//��
	{
		printf(" %d |", i) ;
		for(j = 1; j <= 9; j++)//��
		{
			printf(" %2d", i*j) ;
		}
	printf("\n") ;
	}
	return 0 ;
}
