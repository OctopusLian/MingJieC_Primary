#include "stdio.h"
 
int main()
{
    bool a;    //布尔型变量的返回值就是一个逻辑值
    int i;
      
    a=(5>=3);    //返回值为真 
    printf("%d\n",a);
     
    a=(5<=3);    //返回值为假
    printf("%d\n",a);
     
    a=(5==3);   //返回值为假 
    printf("%d\n",a);
     
    a=(5!=3);   //返回值为真
    printf("%d\n",a);
     
    i=1;
    while(1)    // while的条件为非零时为真，为0时为假，自己可换几个值试试。 
    {
        printf("%d ",i);
        i+=1;
        if(i>10)
            break;
    }
}
