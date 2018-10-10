#include<stdio.h>
int main(void)
{
	int i,j;
	int tensu1[4][3] = {{91,63,78},{67,72,46},{89,34,53},{32,54,34}};
	int tensu2[4][3] = {{97,67,82},{73,43,46},{97,56,21},{85,46,35}};
	int sum[4][3];
	
	//求两次考试的分数之和
	for(i = 0;i < 4;i++){
		for(j = 0;j < 3;j++)
			sum[i][j] = tensu1[i][j] + tensu2[i][j]; 		
	}
	
	//显示第一次考试的分数
	puts("第一次考试的分数");
	for(i = 0;i < 4;i++){
		for(j = 0;j < 3;j++)
			printf("%4d",tensu1[i][j]);
		putchar('\n');
	} 
	
	//显示第二次考试的分数
	puts("第二次考试的分数");
	for(i = 0;i < 4;i++){
		for(j = 0;j < 3;j++)
			printf("%4d",tensu2[i][j]);
		putchar('\n');
	} 
	
	//显示总分
	puts("总分");
	for(i = 0;i < 4;i++){
		for(j = 0;j < 3;j++)
			printf("%4d",sum[i][j]);
		putchar('\n');
	} 
	
	return 0;
}
