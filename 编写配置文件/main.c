#include "my_fun.h"
int main() 
{
	int num = 0;
	while (1) 
	{
		help();
		scanf("%d", &num);
		switch (num) 
		{
		case 1:
			WriteFile();
			break;
		case 2:
			ReadFile();
			break;
		case 3:
			Clear();
			break;
		case 4:
			Exit();
			break;
		}
	}
	system("pause");
	return 0;
}