#include "my_fun.h"
void help() 
{
	printf("*************************\n");
	printf("�밴��ѡ��:\n");
	printf("1 д���ļ�\n");
	printf("2 ��ȡ�ļ�\n");
	printf("3 ����\n");
	printf("4 �˳�\n");
	printf("*************************\n");
}
void WriteFile() 
{
	printf("������Ҫ����ļ�ֵ:");
	char buf[50] = "";
	scanf("%s", buf);
	printf("�������ֵ��Ӧ�ĵ�����:");
	char str[50] = "";
	scanf("%s", str);
	MyWrite(buf,str);
}
void ReadFile() 
{
	printf("������Ҫ�鿴��Ӧ���ݵļ�ֵ:");
	char buf[50] = "";
	scanf("%s", buf);
	MyRead(buf);
}
void Clear() 
{
	system("cls");
}
void Exit() 
{
	exit(0);
}
