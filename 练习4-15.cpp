#include <stdio.h>
int main() {
     int beginHigh = 0, endHigh = 0;
     float weight = 0;
     int margin = 0;
     printf("��ʼ��ֵ��cm��:");
     scanf("%d", &beginHigh);
     printf("������ֵ��cm��:");
     scanf("%d", &endHigh);
     printf("���ֵ��cm��:");
     scanf("%d", &margin);
     for (int i = beginHigh;i <= endHigh; i+=margin) {
     		weight = (i - 100)*0.9;  //����һ�������׼���صĹ�ʽ 
            printf("%d cm\t\t%.2f\n", i, weight);  // \t�����Ʊ�����൱�ڰ���һ��Tab�� 
     }
     return 0;
}
