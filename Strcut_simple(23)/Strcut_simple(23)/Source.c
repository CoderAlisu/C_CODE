#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//初识结构体

//struct 结构关键字  Stu 结构体标签  struct Stu -- 结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char gender[5];
//}s1,s2,s3;//s1,s2,s3是3个全局的结构体变量——尽量少用全局变量

//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char gender[10];
//}Stu;//用typedef _ Stu是别名
//
//int main()
//{
//	//struct Stu s;//局部结构体变量
//	Stu s1 = { "Alisu",20,"15467891","female" };
//	
//	return 0;
//}

//结构体的嵌套
//typedef struct S
//{
//	int a;
//	char b;
//	double c;
//}S;
//
//typedef struct T
//{
//	int t1;
//	S s;//嵌套
//	char t2[20];
//}T;
//
//int main()
//{
//	//创建T的对象并初始化
//	T t = { 123,{456,'b',3.14},"Alisu" };
//	printf("%d\n", t.t1);
//	printf("%d\n", t.s.a);
//	printf("%c\n", t.s.b);
//	printf("%lf\n", t.s.c);
//	printf("%s\n", t.t2);
//
//	return 0;
//}

//结构体传参

typedef struct Stu 
{
	char name[20];
	int age;
	char tele[15];
	char gender;
}Stu;

void Print1(Stu s)
{
	printf("name: %s\n", s.name);
	printf("age : %d\n", s.age);
	printf("tele: %s\n", s.tele);
	printf("gender:%c\n", s.gender);
}

void Print2(Stu* s)
{
	printf("name: %s\n", s->name);
	printf("age : %d\n", s->age);
	printf("tele: %s\n", s->tele);
	printf("gender:%c\n", s->gender);
}

int main()
{
	Stu s1 = { "Alisu",20,"1547892363",'f' };
	//Print1(s1);
	Print2(&s1);
	//Print2更好，因为函数传参时是要压栈的，如果一个结构体过大，参数压栈的系统开销比较大，所以会导致性能下降。而地址占用的空间较小。
	return 0;
}
