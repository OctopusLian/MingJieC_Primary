#include<stdio.h>

//��v��ֵ��Ԫ������Ϊint[3]��Ԫ�ظ���Ϊn������m�����й���Ԫ��
void fill(int m[][3],int n,int v)
{
	int i,j;
	for(i = 0;i < n;i++)
		for(j = 0;j < 3;j++)
			m[i][j] = v;
 } 
 
//��ʾԪ������Ϊint[3]��Ԫ�ظ���Ϊn������m�����й���Ԫ��
void mat_print(const int m[][3],int n)
{
	int i,j;
	for(i = 0;i < n;i++){
		for(j = 0;j < 3;j++)
			printf("%4d",m[i][j]);
		putchar('\n');
	}
 } 
 
int main()
{
	int no;
	int x[2][3] = {0};  //2��3�У�Ԫ������Ϊint[3]��Ԫ�ظ���Ϊ2
	int y[4][3] = {0};  //4��3�У�Ԫ������Ϊint[3]��Ԫ�ظ���Ϊ4
	
	printf("�������й���Ԫ�ص�ֵ��");
	scanf("%d",&no);
	
	fill(x,2,no);
	fill(y,4,no);
	
	printf("---x---\n"); mat_print(x,2);
	printf("---y---\n"); mat_print(y,4);
	
	return 0; 
}
