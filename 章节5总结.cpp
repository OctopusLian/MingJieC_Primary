#include<stdio.h>
#define SIZE 5
int main()
{
	int i,j;
	int sum;
	
	//����a��b��int[5]�͵�һά���飨Ԫ������Ϊint�͡�Ԫ�ظ���Ϊ5��
	int a[SIZE];
	int b[SIZE] = {1,2,3};
	
	//����c��int[2][3]�͵Ķ�ά���飨Ԫ������Ϊint[3]�͡�Ԫ�ظ���Ϊ2��
	int c[2][3] = {
		{11,22,33},{44,55,66},
	} ;
	
	//������b������ȫ�����Ƹ�����a
	for(i = 0;i < SIZE;i++)
		a[i] = b[i];
		
	//��ʾ����a������Ԫ��
	for(i = 0;i < SIZE;i++)
		printf("a[%d] = %d\n",i,a[i]);
		
	//��ʾ����b������Ԫ��
	for(i = 0;i < SIZE;i++)
		printf("b[%d] = %d\n",i,b[i]);
	
	//������a������Ԫ�صĺ͸���sum����ʾ
	sum = 0;
	for(i = 0;i < SIZE;i++)
		sum += a[i];
	printf("����a������Ԫ�صĺ� = %d\n",sum);
	
	//��ʾ����c��ȫ������Ԫ�ص�ֵ
	for(i = 0;i < 2;i++){
		for(j = 0;j < 3;j++){
			printf("c[%d][%d] = %d\n",i,j,c[i][j]);
		}
	} 
	
	return 0;
}
