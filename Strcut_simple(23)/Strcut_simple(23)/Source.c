#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��ʶ�ṹ��

//struct �ṹ�ؼ���  Stu �ṹ���ǩ  struct Stu -- �ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char gender[5];
//}s1,s2,s3;//s1,s2,s3��3��ȫ�ֵĽṹ�����������������ȫ�ֱ���

//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char gender[10];
//}Stu;//��typedef _ Stu�Ǳ���
//
//int main()
//{
//	//struct Stu s;//�ֲ��ṹ�����
//	Stu s1 = { "Alisu",20,"15467891","female" };
//	
//	return 0;
//}

//�ṹ���Ƕ��
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
//	S s;//Ƕ��
//	char t2[20];
//}T;
//
//int main()
//{
//	//����T�Ķ��󲢳�ʼ��
//	T t = { 123,{456,'b',3.14},"Alisu" };
//	printf("%d\n", t.t1);
//	printf("%d\n", t.s.a);
//	printf("%c\n", t.s.b);
//	printf("%lf\n", t.s.c);
//	printf("%s\n", t.t2);
//
//	return 0;
//}

//�ṹ�崫��

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
	//Print2���ã���Ϊ��������ʱ��Ҫѹջ�ģ����һ���ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�������½�������ַռ�õĿռ��С��
	return 0;
}
