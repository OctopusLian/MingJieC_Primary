#include <stdio.h>
int main()
 {
    int i,j,len;
    puts("ֱ�������·��ĵ���ֱ�������Ρ�");
    printf("�߳�:");
    scanf("%d",&len);
   
    for (int i = 1; i<=len; i++) {
         for (int j = 1; j <=i; j++) {
            putchar(' ');
        }
        for (int j=1; j<=len-i+1; j++) {
             putchar('*');
        }
        putchar('\n');
     }
    return 0;
}
