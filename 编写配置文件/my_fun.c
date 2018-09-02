#include "my_fun.h"
void help() 
{
	printf("*************************\n");
	printf("请按键选择:\n");
	printf("1 写入文件\n");
	printf("2 读取文件\n");
	printf("3 清屏\n");
	printf("4 退出\n");
	printf("*************************\n");
}
void WriteFile() 
{
	printf("请输入要加入的键值:");
	char buf[50] = "";
	scanf("%s", buf);
	printf("请输入键值对应的的内容:");
	char str[50] = "";
	scanf("%s", str);
	MyWrite(buf,str);
}
void ReadFile() 
{
	printf("请输入要查看对应内容的键值:");
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
