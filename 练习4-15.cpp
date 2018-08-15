#include <stdio.h>
int main() {
     int beginHigh = 0, endHigh = 0;
     float weight = 0;
     int margin = 0;
     printf("开始数值（cm）:");
     scanf("%d", &beginHigh);
     printf("结束数值（cm）:");
     scanf("%d", &endHigh);
     printf("间隔值（cm）:");
     scanf("%d", &margin);
     for (int i = beginHigh;i <= endHigh; i+=margin) {
     		weight = (i - 100)*0.9;  //这是一个计算标准体重的公式 
            printf("%d cm\t\t%.2f\n", i, weight);  // \t代表制表符，相当于按下一次Tab键 
     }
     return 0;
}
