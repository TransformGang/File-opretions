#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "my_function.h"
int main() 
{
	int num = 0;
	while (1) 
	{
		help();//�����ĵ�
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			encry_file();//�����ļ�
			break;
		case 2:
			decry_file();//�����ļ�
			break;
		case 3:
			my_clear();//����
			break;
		case 4:
			my_exit();//�˳�
			break;
		}
	}
	system("pause");
}
