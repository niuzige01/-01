#include "contact.h"

void menu()
{
	printf("******************************\n");
	printf("*** 1. add	     2. del ******\n");
	printf("*** 3. search    4. modify ***\n");
	printf("*** 5. sort      6. print ****\n");
	printf("********  0. exit  ***********\n");
	printf("******************************\n");
}
enum Option //枚举
{
	EXIT,
	ADD,
	DEL,
	SEARSH,
	MODIFY,
	SORT,
	PRINT,
};
int main()
{
	int input = 0;
	//创建通讯录
	Contact con;//通讯录
	//初始化通讯录的函数
	InitContact(&con);

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//增加人的信息
			AddContact(&con);
			break;
		case DEL:
			//删除
			DelContact(&con);
			break;
		case SEARSH:
			SearshContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}