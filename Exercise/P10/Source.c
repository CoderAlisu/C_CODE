#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


int main()
{
	//��������ʽ����
	printf("%d", printf("%d", printf("%d", 43)));
	//printf�ķ���ֵ�Ǵ�ӡ���ַ��ĸ�����

	return 0;
}


//void num_plus(int* num)
//{
//	(*num)++;//++�����ȼ����� *
//}
//
//int main()
//{
//	int num = 0;
//	//ÿ�ε���������� num+1
//	num_plus(&num);
//	printf("num = %d\n", num);
//	num_plus(&num);
//	printf("num = %d\n", num);
//	num_plus(&num);
//	printf("num = %d\n", num);
//	return 0;
//}


//int binary_search(int* arr,int x, int length)
//{
//	//����ұ�
//	//���鴫�ε�ʱ�򴫵����׵�ַ�����Բ�����sizeof(arr)/sizeof(arr[0])�������С
//	int left = 0;
//	int right = length - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else 
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	//дһ������ʵ��������������Ķ��ֲ���
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int x;
//	int ret;
//	printf("������Ҫ���ҵ�ֵ:");
//	scanf("%d", &x);
//	ret = binary_search(arr, x, 10);
//	if (ret == -1)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n", ret);
//	}
//	return 0;
//}



//int is_leap_year(int n)
//{
//	if ((n % 400 == 0) || (n % 100 != 0 && n % 4 == 0))
//	{
//		return 1;
//	}
//	else 
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	//дһ���������ж�һ���ǲ�������
//	int year;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//int is_prime(int i)
//{
//	//��������1�����Ƿ���0
//	int j = 0;
//	for (j = 2; j < i / 2; j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	//дһ���������ж�һ�����Ƿ�Ϊ����
//	int i = 0;
//	for (i = 101; i < 200; i += 2)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////����д��ֵ���ݣ���ַ���ã�����Ϊ��ʱ�β�ʵ����֮����ʵ�ε�һ�ݿ���
////дһ������������2�����ͱ�����ֵ
//void Swap(int* px, int* py)//��ַ����
//{
//	int temp = *px;
//	*px = *py;
//	*py = temp;
//}
//int main()
//{
//	int x = 100;
//	int y = 200;
//	printf("x = %d,y = %d\n", x, y);
//	Swap(&x, &y);
//	printf("x = %d,y = %d\n", x, y);
//	return 0;
//}



//дһ����������2�������еĽϴ�ֵ
//int get_max(int a,int b)
//{
//	/*if (a < b)
//	{
//		return b;
//	}
//	else
//	{
//		return a;
//	}*/
//	return (a > b) ? a : b;
//}
//int main()
//{
//	int x = 100;
//	int y = 200;
//	int max = get_max(x, y);
//	printf("max = %d\n", max);
//	return 0;
//}


//memset
//int main()
//{
//	//��Hello�ĳ�*****��
//	char arr[] = "Hello World";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "Alisu";
//	char arr2[20];
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);//Alisu
//	return 0;
//}
