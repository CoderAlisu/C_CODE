#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

/*
strncmp
strstr
�ַ�������
�ڴ��������
*/

//strncmp
//int strncmp(const char* str1, const char* str2, size_t count);
//count��ʾҪ�Ƚϵ��ַ�����
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcqwer";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 3);//0
//	//int ret = strncmp(p1, p2, 4);//-1
//	printf("%d\n", ret);
//	return 0;
//}

//strstr�������ַ���
//char* strstr(const char* string,const char* subStr);
//ע�����ĵ���ʱ�� ��NULL��ʾ��ָ�� ��Nul/Null��ʾ '\0'
//��string����subStr����ַ���
//�ҵ��˷���  �״��ҵ���ʱ�� ����ʼλ�ã��Ҳ������ؿ�ָ��

#include<assert.h>

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;//������¼��ǰ�Ƚϵ����
//
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//�ҵ��ִ�
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ����ִ�
//
//}
//
//int main()
//{
//	char* p1 = "abbbcdef";
//	char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("�ִ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//strtok - �ַ����ָ��
//char* strtok(char* str,const char* sep);
//strtok��ı䱻�������ַ���������һ���ȿ���һ��ԭ�ַ�����Ȼ���ٽ����и�
//��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ����ָ�ı�ǡ�
//strtok�����ҵ�str�е���һ����ǣ��������� \0 ��β������һ��ָ�������ǵ�ָ�롣
//(ע: strtok������ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ġ�

//strtok�����ĵ�һ��������Ϊ NULL���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ��
//strtok�����ĵ�һ������ΪNULL����������[ͬһ���ַ���]�б������λ�ÿ�ʼ��������һ����ǡ�����ַ����в����ڸ���ı�ǣ��򷵻� NULL ָ�롣


//
//int main()
//{
//	/*char arr[] = "Alisu@LL.com";
//	char* p = "@.";*/
//
//	char arr[] = "192.168.12.121";
//	char* p = ".";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);//�ڶ��δ�NULL����ʾ��Ȼ�и��һ�δ���ȥ���ַ���
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);//�����δ�NULL����ʾ��Ȼ�и��һ�δ���ȥ���ַ���
//	//printf("%s\n", ret);
//
//	char* ret = NULL;
//	for (ret = strtok(arr,p); ret != NULL; ret = strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


//strerror - ���ش����룬����Ӧ�Ĵ�����Ϣ
//char* strerror(int errnum);

//#include<errno.h>
//
//int main()
//{
//	//������ - ������Ϣ
//	//0 - No error
//	//1 - Operation not permitted
//	//2 - No such file or directory
//	//...
//	//char* str = strerror(errno);
//	////errno ��һ��ȫ�ֵĴ�����ı���
//	////��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//	//printf("%s\n", str);
//
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");//�ҵ�ǰ��Ŀ���ļ�������û�С�test.txt�����ļ�
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success.\n");
//	}
//
//	return 0;
//}


//�ַ������ƣ�����

#include<ctype.h>

int main()
{
	//char ch = 'A';
	//int ret = islower(ch);
	////����0 - ����Сд�ַ�
	////���ط�0 - ��Сд
	//printf("%d\n", ret);

	//char ch = tolower('A');
	//putchar(ch);


	char arr[] = "I Am a Student.";
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);//��д��ĸתСд
		}
		i++;
	}
	printf("%s\n", arr);

	return 0;
}
