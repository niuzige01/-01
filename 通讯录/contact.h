#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#define MAX_NAME 20
#define MAX_SEX	10
#define MAX_TELE 12
#define MAX_ADDR 30

#define MAX 1000

//类型的定义
typedef struct PeoInfo		//typedef重新定义名为PeoInfo
{
	char name[MAX_NAME];	//姓名
	char sex[MAX_SEX];		//性别
	int age;				//年龄
	char tele[MAX_TELE];	//电话
	char addr[MAX_ADDR];	//地址
}PeoInfo;

//通讯录
typedef struct Contact
{
	PeoInfo data[MAX];//存放添加进来的人的信息
	int sz;			  //记录的是当前通讯录中有效信息的个数
}Contact;

//初始化通讯录
void InitContact(Contact* pc);

//增加联系人
void AddContact(Contact* pc);

//打印联系人信息
void PrintContact(const Contact* pc);

//删除联系人
void DelContact(Contact* pc);

//查找指定联系人
void SearshContact(Contact* pc);

//修改联系人
void ModifyContact(Contact* pc);

//排序联系人
void SortContact(Contact* pc);
