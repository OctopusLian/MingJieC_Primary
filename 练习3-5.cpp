#include "stdio.h"
 
int main()
{
    bool a;    //�����ͱ����ķ���ֵ����һ���߼�ֵ
    int i;
      
    a=(5>=3);    //����ֵΪ�� 
    printf("%d\n",a);
     
    a=(5<=3);    //����ֵΪ��
    printf("%d\n",a);
     
    a=(5==3);   //����ֵΪ�� 
    printf("%d\n",a);
     
    a=(5!=3);   //����ֵΪ��
    printf("%d\n",a);
     
    i=1;
    while(1)    // while������Ϊ����ʱΪ�棬Ϊ0ʱΪ�٣��Լ��ɻ�����ֵ���ԡ� 
    {
        printf("%d ",i);
        i+=1;
        if(i>10)
            break;
    }
}
