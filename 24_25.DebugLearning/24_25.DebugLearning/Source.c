#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
/*Debug:���԰汾������������Ϣ���Ҳ����κ��Ż������ڳ���Ա����
Release:�����汾�������ǽ����˸����Ż���ʹ�ó����ٴ�С�������ٶ��϶������ŵģ��Ա��û����õ�ʹ��
*/

/*Debug:����Debug�汾�Ŀ�ִ�г��򡪡����Ե��Եģ���Ϊ�ļ��а����˵�����Ϣ
Release������Release�汾�Ŀ�ִ�г���Release�汾���ܵ��ԣ����˶ϵ�Ҳû�ã�
*/
//int main()
//{
//	for (int i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//Debug��Release����
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	//Debug�汾�ᱨ��
//	//Release��ӡ13��hehe����release��Դ����Ż�
//	//system("pause");
//
//}

//��ʽ���ÿ�ݼ� f5��f11��f10��f9���л��ϵ㣩
//f5 �������� +  f9 ����/�л��ϵ�(�ʼǱ�Ҫ��fn)

//f10-����̡�һ��һ����
//f9 ����䣬���Խ��뺯���ڲ�
//int main()
//{
//	for (int i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//
//	for (int i = 0; i < 100; i++)
//	{
//		printf("%d ", 10 - i);
//	}
//	return 0;
//}

//���Թ����в鿴����ǰ��Ϣ
//�鿴��ʱ�����������ӣ�watch������
//���ڴ桪���ڴ棨memory������
//Debug-windows-disassembly �鿴������
//-rigister�����Ĵ�������
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//���ö�ջ����callstack�����鿴�����к����ĵ��ù�ϵ
//���ԣ�f10����
//�һ��ϵ㣬�������������ͣ������Ҫͣ��λ��
//int main()
//{
//	//��n���ĺ�
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//
//}

//int main()
//{
//	//���е��ԣ���&arr[12]��&i
//	//ջ����Ĭ��ʹ�ã���ʹ�øߵ�ַ���Ŀռ䣬��ʹ�õ͵�ַ���Ŀռ�
//	//���������±����������ַ���ɵ͵��߱仯��
//
//	//vc6.0�£� <=10����ѭ��
//	//gcc�������£� <=11 ��ѭ��
//	//vs2013 <=12 ��ѭ��
//	//vs2022 ����x86 ���� <=12 ��ѭ��
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for ( i = 0; i <= 12; i++)//����i<=�����Ĳ�ͬ������ջ�������������ѭ��
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	//��forѭ�����涨��i��C++��д����
//
//	/*���ۣ�д���뾡����Խ�磬���׵�����ѭ��*/
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%p\n", &i);
//	printf("%p\n", arr);
//	//Debug�汾��i�ĵ�ַ����arr�ĵ�ַ����Խ�����������ܻ�Ӱ�쵽i��ֵ
//	//&i: 010FF6E4
//	//arr:010FF6B4
//
//	//Release�汾���������Ż���i�ĵ�ַС��arr��ַ��������Ӱ�쵽i��ֵ
//	//&i: 008FF984
//	//arr:008FF988
//
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		/**dest = *src;
//		dest++;
//		src++;*/
//		//�Ż�1
//		*dest++ = *src++;
//	}
//	*dest = '\0';
//}
//void my_strcpy(char* dest, char* src)
//{
//	//�Ż�2
//	while(*dest++ = *src++)// \0 ��Ӧ 0 
//	{
//		;
//	}
//	
//}

//void my_strcpy(char* dest, char* src)
//{
//	//�Ż�3�����������Ļ�ֻ�ܹ�ܴ��󣬲����ҳ��������
//	if (dest != NULL && src != NULL)
//	{
//		while(*dest++ = *src++)// \0 ��Ӧ 0 
//		{
//			;
//		}
//	}
//}


#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	//���dest����srcΪNULL���ͻᱨ��
//	//ȱ�㣺�����dest��srcд���˳��������С����ǽ���Ǵ���ģ�
//	while (*dest++ = *src++)// \0 ��Ӧ 0 
//	{
//		;
//	}
//	//���ۣ�����assert
//}

//void my_strcpy(char* dest, const char* src)//�Ż�4��const��˵��*src���ܸı�
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	
//	//���д����src��dest�������Ǳ��벻ͨ���ģ�
//	while (*dest++ = *src++)// \0 ��Ӧ 0 
//	{
//		;
//	}
//	//���ۣ�����assert
//}


//char* my_strcpy(char* dest, const char* src)//�Ż�5������ֵ�޸�Ϊchar*
//{
//	char* ret = dest;
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//
//	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
//	while (*dest++ = *src++)// \0 ��Ӧ 0 
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcpy������ʵ��
//	char arr1[] = "**********";
//	char arr2[] = "Alisu";
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}


//int main()
//{
//	const int num = 10;//����const��������num�ǲ��ܸĵ�
//	
//	//const int* p = &num;//���������const������p�Ͳ��ܸ�num��ֵ
//	////*p = 20;
//	//const����ָ�����*����ߵ�ʱ�����ϣ������ε���*p��Ҳ����˵����ͨ��p���ı�*p��num����ֵ
//
//	int n = 100;
//	int* const p = &num;
//	//p = &n;
//	//const����ָ�����*���ұߵ�ʱ�����ϣ������ε���ָ�����p��������˵p���ܱ��ı�
//
//
//	printf("%d\n", num);//�����Ϊ20��˵��ͨ��*p����num��ֵ�����ǷǷ���
//	return 0;
//}

int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "Alisu";
	int len = my_strlen(arr);
	printf("len = %d\n", len);
	return 0;
}

/*�������󣺱�����󡪡��﷨�ȵ�
���Ӵ����޷��ҵ��ⲿ���š���Ҫô��û���壬Ҫô������д����
���д��󣺽������ԣ��𲽶�λ�����Ѹ�
*/