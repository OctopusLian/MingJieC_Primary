#include<stdio.h>
int main(void)
{
	int xiaozhang = 178;  //小张的身高 
	int xiaoli = 175;  //小李的身高 
	int xiaowang = 179;  //小王的身高
	
	int *xiaolin,*xiaohong;
	
	xiaolin = &xiaozhang;  //小玲指向小张 
	xiaohong = &xiaowang;  //小红指向小王 
	
	printf("小玲喜欢的人的身高：%d\n",*xiaolin);
	printf("小红喜欢的人的身高：%d\n",*xiaohong);

	xiaohong = &xiaoli;  //小红指向小李（移情别恋） 
		
	*xiaohong = 180;   //将小红指向的对象赋为180 == 修改小红喜欢的人的身高
	
	printf("\n");
	printf("小张的身高：%d\n",xiaozhang);
	printf("小李的身高：%d\n",xiaoli);
	printf("小王的身高：%d\n",xiaowang);
	printf("小玲喜欢的人的身高：%d\n",*xiaolin);
	printf("小红喜欢的人的身高：%d",*xiaohong);
	
	return 0; 
 } 
