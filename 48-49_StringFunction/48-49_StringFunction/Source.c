#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

/*
* Ŀ¼��
���ַ������ȣ�strlen
���Ȳ������Ƶ��ַ���������strcpy��strcat��strcmp��������\0�Ż�ͣ������ȫ
���������Ƶ��ַ���������strncpy��strncat��strncmp
�ַ������ң�strstr��strtok
������Ϣ���棺strerror��
�ַ�����
�ڴ����������memcpy��memmove��memset��memcmp
*/



//ʵ��strlen��3�ַ��� ------------------------
//1.�������ķ���
//2.�ݹ�
//3.ָ��-ָ��

#include<assert.h>

//int my_strlen(const char* str)
//{
//	//������
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')//while(*str) Ҳ��
//	{
//		count++;
//		str++;
//	}
//	return count;
//}


//int my_strlen(char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		str++;
//		return 1 + my_strlen(str);
//	}
//}
//
//int main()
//{
//	//int len = strlen("abcdef");
//	////strlen�����ַ�����һֱ�����ң��ҵ�'\0'
//	//printf("%d\n", len);//6
//
//	//����ʾ��
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//int len2 = strlen(arr);
//	//printf("%d\n", len2);//���ֵ
//
//	char arr[] = "abcdef";
//	int len2 = my_strlen(arr);
//	printf("%d\n", len2);
//
//
//	/*if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}*/
//	//��ӡhehe
//	//���ͣ�strlen���壺size_t strlen(const char* str)
//	//size_t == unsigned int ����2���޷������������Ȼ���޷�������һֱ����0
//
//
//	return 0;
//}


//strcpy ----------------
//char* strcpy(char* dest,const char* src)
//1. src������\0��β
//2. dest�����㹻�󣬲��ܷ���src
//3. Ŀ��ռ����ɱ䣨��Ҫ�ó����ַ�����


//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)//���һ��\0��ֵ��ȥ֮�󣬱��ʽ��ֵΪ0��whileҲ��ͣ������
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "rin";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//
//}


//strcat------------------
//char* strcat(char* dest, const char* src);
//1. src������\0Ϊ����
//2. dest�������㹻��Ŀռ䣬��������src������
//3. dest������޸�
//4. dest���뺬��\0


//void my_strcat(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src != NULL);
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while(*dest++ = *src++)
//	{ }
//	
//}
//
//int main()
//{
//	char arr1[20] = "hello";//dest�������㹻��Ŀռ䣬��������src������
//	char arr2[] = "world";//world��hello�����\0��ʼ׷�ӣ�����\0����Ķ���
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//strcmp
//int strcmp(const char* str1, const char* str2);
//�ȽϷ�ʽ���Ƚ϶�Ӧ���ַ���ASCII��ֵ str1>str2 ���ش���0�ģ���ȷ���0��С�ڷ���С��0���� (��ͬ�ı��������ص�ֵ���ܲ�ͬ)


//int my_strcmp(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	//�Ƚ�
//	while (*p1 && *p2)
//	{
//		if (*p1 > *p2)
//		{
//			return 1;
//		}
//		else if (*p1 < *p2)
//		{
//			return -1;
//		}
//		p1++;
//		p2++;
//	}
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//���
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char* p1 = "cabc";
//	char* p2 = "abc";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}


//strncpy-------------
//char* strncpy(char* strDest, const char* strSource, size_t count); //count�ĵ�λ���ֽ�
//
//char* my_strncpy(char* dest, const char* src, int k)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (k)
//	{
//		if (*src == '\0')
//		{
//			*dest++ = '\0';
//		}
//		else
//		{
//			*dest++ = *src++;
//		}
//		k--;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	/*char arr1[5] = "abc";
//	char arr2[] = "hello world";
//	strncpy(arr1, arr2, 4);
//	printf("%s\n", arr1);*/
//
//	char arr1[10] = "abcdefg";
//	char arr2[] = "rin";
//	my_strncpy(arr1, arr2, 5);//arr2�����Ļ���\0����
//	printf("%s\n", arr1);
//	return 0;
//}


//strncat-----------------------
//������֮����һ��\0��dest�ַ�������

int main()
{
	char arr1[30] = "abc\0xxxxxxxxxx";
	char arr2[] = "hello";
	//strncat(arr1, arr2, 3);
	strncat(arr1, arr2, 6);//׷�ӵı�arr�����������ٺ����ټ�0�ˣ�ֻ��� arr2���� + 1��"\0"

	return 0;
}