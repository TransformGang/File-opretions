#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "opretion.h"
void help() //�����ĵ�
{
	printf("********************\n");
	printf("�밴��ѡ��,����س�ȷ��\n");
	printf("1 ����\n");
	printf("2 ����\n");
	printf("3 ����\n");
	printf("4 �˳�\n");
	printf("********************\n");
}
void encry_file() //�����ļ�
{
	char str[100]="";
	char det[100]="";
	printf("������Ҫ���ܵ��ļ�����·��:\n");
	/*fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = 0;//��Ե�һ�����뺯��;
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = 0;*/
	scanf("%s", str);
	printf("��������ܺ���ļ�����·��:\n");
	/*fgets(det, sizeof(det), stdin);
	det[strlen(det) - 1] = 0;*/
	scanf("%s", det);
	int num=opretion_encry_file(str, det);//����
	if (num != 1) 
	{
		printf("�ļ�����ʧ��!\n");
	}
	else 
	{
		printf("�ļ����ܳɹ�!\n");
	}
}
void decry_file()//�����ļ�
{
	char str[100] = "";
	char det[100] = "";
	printf("������Ҫ���ܵ��ļ�����·��:\n");
	/*fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = 0;*/
	scanf("%s", str);
	printf("��������ܺ���ļ�����·��:\n");
	/*fgets(det, sizeof(det), stdin);
	det[strlen(det) - 1] = 0;*/
	scanf("%s", det);
	printf("�������������:\n");
	char a[10] = "123456789";
	char pwd[10] = "";
	scanf("%s", pwd);
	system("cls");//����
	if (strcmp(a, pwd) == 0)
	{
		int num = opretion_decry_file(str, det);//����
		if (num != 1)
		{
			printf("�ļ�����ʧ��!\n");
		}
		else
		{
			printf("�ļ����ܳɹ�!\n");
		}
	}
	else 
	{
		printf("�������! ����ʧ��.\n");
	}
}
void my_clear()//����
{
	system("cls");
}
void my_exit()//�˳�
{
	exit(0);
}