#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	
//	int a = 0x11223344;
//	//����ָ������Ͳ�һ��������ĵ�ַһ��
//	//int* p1 = &a;
//	//*p1 = 0; //a��Ϊ00 00 00 00
//
//	char* p2 = &a;
//	*p2 = 0;//a��Ϊ 00 33 22 11
//
//	/*ָ�����;�����ָ����н����õ�ʱ���ܹ����ʵĿռ�Ĵ�С
//	int* p: *p�ܹ�����4���ֽ�
//	char* p: *p�ܹ�����1���ֽ� */
//	//printf("%p\n", p1);
//	//printf("%p\n", p2);
//
//	return 0;
//}

//int main()
//{
//	//ָ��Ӽ�����
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("%p\n", pa);//F211DCF564
//	printf("%p\n", pa+1);//F211DCF568 ������4���ֽڣ�
//	printf("%p\n", pc);//F211DCF564
//	printf("%p\n", pc+1);//F211DCF565 ������1���ֽڣ�
//
//	/*ָ�����;�����ָ��һ���߶�Զ��Ҳ���Ǿ�����ָ��Ĳ���*/
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//������-��Ԫ�ص�ַ
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	//Ұָ�룺ָ��ָ���λ���ǲ���֪�ģ�����ģ�����ȷ�ģ�û����ȷ���Ƶģ�.���ܵ��µļ��������
//	//1.δ��ʼ��
//	//int* p;//�ֲ���ָ�����
//
//	////2.Խ�����
//	//int* arr[10] = { 0 };
//	//int* p = arr;
//	//for (int i = 0; i < 12; i++)//pָ��Ŀռ䳬��arr�Ŀռ䣬��Խ��
//	//{
//	//	p++;
//	//}
//	return 0;
//}


//3.ָ��ָ��Ŀռ䱻�ͷ�
//int* test()
//{
//	int a = 10;//a�ֲ��������������������٣��Ѿ������ڵ�ǰ����Ŀռ䣨����ϵͳ�ˣ�
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;//��ʱ�����ǷǷ���
//	return 0;
//}

//int main()
//{
//	int* p = NULL;//�ڲ�֪����ʼ����ʲô��ʱ��ֱ��NULL
//}

//int main()
//{
//	//ָ��Ӽ�����
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1;
//	}*/
//
//	int* p = &arr[9];
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);//10 8 6 4 2
//		p -= 2;
//	}
//	return 0;
//}

//int main()
//{
//	float values[5] = {1,2,3,4,5};
//	float* p;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%.1f ", values[i]);
//	}
//	printf("\n");
//	for (p = values; p<&values[5]; )
//	{
//		*p++ = 0;//��һ��p++���ڶ���*p
//		//�ȼ��� *p = 0; p = p + 1; ��Ȼ++��ִ�У������Ǻ���++�����Ի�����*p = 0
//		//Ч���ǰ�values[5]ȫ����Ϊ0
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%.1f ", values[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//ָ���ȥָ�� = �м��Ԫ�ظ���
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	//strlen - 1 ��������ʽ 2 �ݹ鷽ʽ 3 ָ������ķ�ʽ
//	char arr[] = "Alisu";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//arr-��Ԫ�ص�ַ
//	printf("%p\n", &arr[0]);
//	//2������
//	//1. &arr �����arr��ʾ������������ĵ�ַ��&arr��ȡ����������ĵ�ַ
//	//2.sizeof(arr) �����arr���������飬sizeof�������������������������Ĵ�С
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	/*for (int i = 0; i < 10; i++)
//	{
//		printf("%p ---- %p\n", p + i, &arr[i]);
//	}*/
//
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;//�����鸳ֵ
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	
//	return 0;
//}

//int main()
//{
//	//����ָ��
//	int a = 10;
//	int* pa = &a;
//	int* * ppa = &pa;// * ��ʾppaָ�����һ�� ����Ϊint* �ĵ�Ԫ
//	
//	**ppa = 20;
//	printf("%d\n", **ppa);
//
//	return 0;
//
//}


int main()
{
	//ָ������ - ����
	//����ָ�� - ָ��
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr2[3] = { &a,&b,&c };
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", *arr2[i]);
	}
	return 0;
}