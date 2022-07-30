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
enum Option //ö��
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
	//����ͨѶ¼
	Contact con;//ͨѶ¼
	//��ʼ��ͨѶ¼�ĺ���
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//�����˵���Ϣ
			AddContact(&con);
			break;
		case DEL:
			//ɾ��
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
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}