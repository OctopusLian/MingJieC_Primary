#include<stdio.h>
int main(void)
{
	int xiaozhang = 178;  //С�ŵ���� 
	int xiaoli = 175;  //С������ 
	int xiaowang = 179;  //С�������
	
	int *xiaolin,*xiaohong;
	
	xiaolin = &xiaozhang;  //С��ָ��С�� 
	xiaohong = &xiaowang;  //С��ָ��С�� 
	
	printf("С��ϲ�����˵���ߣ�%d\n",*xiaolin);
	printf("С��ϲ�����˵���ߣ�%d\n",*xiaohong);

	xiaohong = &xiaoli;  //С��ָ��С���������� 
		
	*xiaohong = 180;   //��С��ָ��Ķ���Ϊ180 == �޸�С��ϲ�����˵����
	
	printf("\n");
	printf("С�ŵ���ߣ�%d\n",xiaozhang);
	printf("С�����ߣ�%d\n",xiaoli);
	printf("С������ߣ�%d\n",xiaowang);
	printf("С��ϲ�����˵���ߣ�%d\n",*xiaolin);
	printf("С��ϲ�����˵���ߣ�%d",*xiaohong);
	
	return 0; 
 } 
