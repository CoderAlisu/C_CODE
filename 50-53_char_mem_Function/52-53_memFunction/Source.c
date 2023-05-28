#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//str..����ַ����������� �Ĳ�������һ�㶼���ַ���

//mem�ࣺ - ���͡������͡��ṹ��
//memcpy
//memmove
//memcmp
//memset

//memcpy��--------------------------------------- 
// void* memcpy(void* dest, const void* src, size_t num); 
//num�ĵ�λ���ֽ�

struct S
{
	char name[20];
	int age;
};

#include<assert.h>

void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;

	assert(dest != NULL);
	assert(src != NULL);

	while (num--)
	{
		*(char*)dest = *(char*)src;//һ���ֽ�һ���ֽڵؿ���
		++(char*)dest;//����++��Ҫ��һ������
		++(char*)src;
	}
	return ret;
}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	struct S arr3[3] = { {"Alisu",20},{"Lily",20} };
//	struct S arr4[3] = { 0 };
//
//	//char* dest, const char* src
//	//strcpy(arr2, arr1);
//	//��strcpy���������������Ŀ���
//	//���Ծ�����memcpy
//
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	
//
//	return 0;
//}


//memmove()
//void* memmove(void* dest, const void* src, size_t count);


//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	int dist = *(char*)dest - *(char*)src;
//
//	if (dist <= 0)
//	{
//		//��ǰ������
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//�Ӻ���ǰ����
//		while (num--)
//		{
//			//����ѭ��֮��num�Ѿ���һ�ˣ���
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//}

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	//�ڶ���ʵ�ַ�ʽ
//	assert(dest != NULL);
//	assert(src != NULL);
//	
//	void* ret = dest;
//	
//	if (dest < src || dest > (char*)src + num)
//	{
//		//���ˣ�ǰ->�� ����
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			((char*)dest)++;
//			((char*)src)++;
//		}
//	}
//	else
//	{
//		//�м䣺�Ӻ���ǰ ����
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//
//	return ret;
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//
//	//my_memcpy(arr + 2, arr, 20);//Ŀ�꣺��12345 ������ 34567��λ����ȥ
//	
//	my_memmove(arr + 2, arr, 20);
//
//	//memcpy(arr + 2, arr, 20);//�������memcpyҲ���Դ����ڴ��ص������
//
//	/*C���Ա�׼�涨��
//	��memcpy�����ڴ治�ص��ĸ���
//	��memmove�����ڴ��ص��ĸ���
//	*/
//
//	//my_memcpy��ȱ�㣬������dest��src������ͬһ��Ŀռ䣨�������ڴ��ص�����������������ǰ�ı�ֵ
//	//memmove() - �����ڴ��ص������
//
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);//���ǽ����һ��ʼ��Ŀ��Ԥ����ǲ�ͬ��
//	}
//	return 0;
//}


//memcmp���Ƚ�����ָ��ָ���num���ֽ�
//int memcmp(const void* ptr1, const void* ptr2, size_t num);
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,3,4 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}


//memset - �ڴ�����
//void* memeset(void* dest, int c,size_t count) 
//c��ʾҪ���õ�ֵ��count���ֽ���

int main()
{
	char arr[10] = "";
	memset(arr, '#', 10);


	return 0;
}