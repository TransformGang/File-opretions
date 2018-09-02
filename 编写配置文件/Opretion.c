#include "Opretion.h"
void MyWrite(char *buf,char *str)
{
	struct stat st;
	int w=stat("string.ini", &st);
	if (w != 0) 
	{
		FILE *fp=fopen("string.ini", "w");
		if (!fp) 
		{
			perror("");
		}
		fprintf(fp, "%s = %s\n", buf, str);
		fclose(fp);
	}
	else 
	{
		FILE *fp = fopen("string.ini", "r");
		if (!fp) 
		{
			perror("");
		}
		struct stat st;
		stat("string.ini", &st);
		int size = st.st_size;
		char *all = (char *)malloc(size+100);
		memset(all, 0, size+100);
		char m[100] = "";
		char key[50] = "";
		char *u=NULL;
		int sum = 0;
		while (1)
		{
			u = (char *)fgets(m, sizeof(m), fp);
			if (u == NULL)
			{
				break;
			}
			sscanf(m, "%[^= ]",key);
			if (strcmp(buf, key) == 0)
			{
				sprintf(m, "%s = %s\n", key, str);
				sum++;
			}
			strcat(all, m);
		}
		if (sum == 0)
		{
			sprintf(m, "%s = %s\n", buf, str);
			strcat(all, m);
		}
		fclose(fp);
		fp = fopen("string.ini", "w");
		if (!fp)
		{
			perror("");
		}
		fputs(all, fp);
		fclose(fp);
	}

	
}
void MyRead(char *buf) 
{
	FILE *fp = fopen("string.ini", "r");
	if (!fp) 
	{
		perror("");
	}
	char m[100] = "";
	char key[50] = "";
	char end[50] = "";
	int sum = 0;
	char *u = NULL;
	while (1)
	{
		u = (char *)fgets(m, sizeof(m), fp);
		if (u == NULL)
		{
			break;
		}
		sscanf(m, "%s = %s\n", key,end);
		if (strcmp(buf, key) == 0)
		{
			printf("该键值对应的内容为:%s\n", end);
			sum++;
		}
	}
	if (sum == 0)
	{
		printf("对不起,没有查到相关内容.\n");
	}
	fclose(fp);
}