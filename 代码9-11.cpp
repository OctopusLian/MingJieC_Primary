#include<ctype.h>
#include<stdio.h>
//���ַ����е�Ӣ���ַ�ת��Ϊ��д��ĸ
void str_toupper(char s[])
{
	int i = 0;
	while(s[i]){
		s[i] = toupper(s[i]);
		i++;
	}
 } 
 
void str_tolower(char s[])
{
	int i = 0;
	while(s[i]){
		s[i] = tolower(s[i]);
		i++;
	}
}

int main(void)
{
	char str[128];
	
	printf("�������ַ�����");
	scanf("%s",str);
	
	str_toupper(str);
	printf("��д��ĸ��%s\n",str);
	
	str_tolower(str);
	printf("Сд��ĸ��%s\n",str);
	
	return 0;
}
