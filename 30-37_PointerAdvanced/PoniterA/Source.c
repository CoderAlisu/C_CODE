#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//�ع��ϽڿΣ��ַ�ָ�롢ָ�����顢����ָ��----------
//int main()
//{
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* pc = "abcdef";//abcdef��һ�������ַ�����
//
//	//ָ������ - ���� -���ָ�������
//	char* arr1[5];//���5�� char* ��ָ��
//	int* arr2[5];
//
//	//����ָ��
//	//int* p;//����ָ��
//	int arr[5];//&arr ����������ĵ�ַ
//	int(*p)[5] = &arr; //p ָ��int�͵� ��5��Ԫ�ص� ����
//	//���� int (*)[5] ��p������ - ������ָ������
//	int (*parr3[10])[5];//����ȥ��parr3[10]֮��int (*)[5] �������Ԫ������
//	return 0;
//}


//������� �� ָ����� --------------

//һά���鴫�Σ����¼��ִ�����ʽ���ǿ��Եģ�
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int *arr)
//{}
//void test(int *arr[20])//�����20Ҳ����ʡ��
//{}
//void test(int **arr)
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test(arr2);
//	return 0;
//}

//��ά���鴫��--------

//void test(int arr[3][4])
//{}
//void test1(int arr[][4])
//{}
//void test2(int arr[3][])//err
//{}

//void test3(int *arr)//err
//{}

//void test4(int **arr)//err
//{}

//void test5(int (*arr)[4])
//{}
//
//int main()
//{
//	int arr[3][4] = { 0 };//��ά����� ������arr ��һ��һά����
//	/*test(arr);
//	test3(arr);*/
//	//test4(arr);//����ָ���Ǵ��һ��ָ���
//	test5(arr);
//
//	return 0;
//}

//void test(int* p)//����Ϊһ��ָ����Խ��գ��ٱ�����ַ ��һ��ָ��
//{
//}
//
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test(&a);
//	test(p1);
//
//	return 0;
//}

//--------------------

//void test(int** p)
//{}
//
//int main()
//{
//	//����ָ�봫��
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);//��һ��ָ���ַ
//	test(pp);//�ڶ���ָ��
//	
//	int* arr[5];
//	test(arr);//��ָ�����飨���һ��ָ���������������
//
//	return 0;
//}


//����ָ��------------ָ������ָ�룬��ź�����ַ��һ��ָ��

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a, b));
//
//	//&������ == ������������ʾ�����ĵ�ַ ���������ǲ�һ����
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//
//	//����ָ�� vs ����ָ��
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;
//
//	int (*pAdd)(int x, int y) = Add;//pAddҪ�Ⱥ�*��ϣ���ʾ����ָ��
//	int (*pa)(int, int) = Add;
//
//	//����
//	printf("%d\n", (*pa)(2, 3));//5
//
//
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	//ע��һ���㣺
//	//int(*p)[10];//���� int(*)[10] ������
//
//	//ͬ���أ�
//	void(*p)(char*) = Print;//void(*)(char*) ��p������
//	(*p)("Alisu");
//	
//	return 0;
//}

//int main()
//{
//	//�������¶��δ��룺
//
//	(*(void(*)())0)();
//	//��*������ָ�����ͣ�0������ ����   (����) + �� = �����������ǿ������ת��
//	// ��0ǿ������ת���ɣ�void(*)()����ָ�����ͣ�����0����һ�������ĵ�ַ
//	//����0��ַ���ĸú��� 
//
//
//	void(*signal(int, void(*)(int)))(int);
//	// signal(���ͣ�����ָ������)
//	//void (* ����)(int) - ��������ķ���ֵ������ void(*)(int) ��������ָ������
//	//���ԡ�C������ȱ�ݡ�
//	
//	return 0;
//}

//����һ��signal����������
//signal������2��������һ����int�ͣ�һ���Ǻ���ָ�����ͣ���ָ��ָ��ĺ�����һ��int�Ͳ���������ֵ��void
//signal�����ķ���ֵ�Ǻ���ָ�룬��ָ��ָ��ĺ�����һ��int�Ͳ���������ֵ��void

//void(*signal(int, void(*)(int)))(int); //���д�ø����:
//
//typedef void(*pfun_t)(int);//pfun_t�Ǳ���
//pfun_t singal(int, pfun_t);

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", (&Add)(2, 3));
//	printf("%d\n", (Add)(2, 3));
//
//	printf("%d\n", (*pa)(2, 3));
//
//	//printf("%d\n", (**pa)(2, 3));
//	//printf("%d\n", (***pa)(2, 3));
//	//����4�������ͬ��˵��paǰ��� * �ǲ������õġ������Խ����á�Ҳ���Բ�������
//	return 0;
//}


//����ָ������---------------

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int (*pa)(int, int) = Add;//Sub/Mul/Div
//	//��Ҫһ������
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//
//	return 0;
//}


//char* my_strcpy(char* dest, const char* src);
////дһ������ָ��pf���ܹ�ָ��my_strcpy
////дһ������ָ�����飬�ܹ����4�� my_strcpy�����ĵ�ַ
//
//int main()
//{
//	char* (*pf)(char*, const char*) = my_strcpy;
//
//	char* (*pfArr[4])(char*, const char*);
//
//	return 0;
//}

//ʵ��һ��������

void menu()
{
	printf("---------------------\n");
	printf("---1. add   2. sub---\n");
	printf("---3. mul   4. div---\n");
	printf("-------0. exit-------\n");
	printf("---------------------\n");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	//pArr��һ������ָ������ ��Ϊת�Ʊ�-----------------����ָ���Ӧ��
	int(*pArr[])(int, int) = { 0,Add,Sub,Mul,Div };
	//�ô�����ࡢ������ʱ���Ӽ������ĺ���������Ӹ�xor
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("����������������:");
			scanf("%d%d", &x, &y);
			int ret = pArr[input](x, y);
			printf("%d\n", ret);
		}
		else if(input ==0)
		{
			printf("�˳�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	} while (input);
	return 0;
}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		//�߼���ȷ�ˣ����Ǵ�������
//		switch (input)
//		{
//		case 1:
//			printf("������2����������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("������2����������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("������2����������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("������2����������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//ָ���������ָ��-----------------

