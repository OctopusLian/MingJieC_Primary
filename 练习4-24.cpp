#include "stdio.h"
int main(int argc, char const *argv[])
{
	int n;
	puts("�����������һ����������");
	printf("�������м���:"); scanf("%d",&n);
	for (int i = 1;i<=n; i++) {
		for (int j = 1; j<=n-i; j++) {
            putchar(' ');
        }
        for (int j=1;j<=i ; j++) {
            putchar('*');
        }
        for (int j=1; j<i; j++) {
            putchar('*');
        }
	putchar('\n'); 
 	}
	return 0;
}
