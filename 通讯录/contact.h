#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#define MAX_NAME 20
#define MAX_SEX	10
#define MAX_TELE 12
#define MAX_ADDR 30

#define MAX 1000

//���͵Ķ���
typedef struct PeoInfo		//typedef���¶�����ΪPeoInfo
{
	char name[MAX_NAME];	//����
	char sex[MAX_SEX];		//�Ա�
	int age;				//����
	char tele[MAX_TELE];	//�绰
	char addr[MAX_ADDR];	//��ַ
}PeoInfo;

//ͨѶ¼
typedef struct Contact
{
	PeoInfo data[MAX];//�����ӽ������˵���Ϣ
	int sz;			  //��¼���ǵ�ǰͨѶ¼����Ч��Ϣ�ĸ���
}Contact;

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//������ϵ��
void AddContact(Contact* pc);

//��ӡ��ϵ����Ϣ
void PrintContact(const Contact* pc);

//ɾ����ϵ��
void DelContact(Contact* pc);

//����ָ����ϵ��
void SearshContact(Contact* pc);

//�޸���ϵ��
void ModifyContact(Contact* pc);

//������ϵ��
void SortContact(Contact* pc);
