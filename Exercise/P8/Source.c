#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<Windows.h> //����Sleep
#include<stdlib.h> //����system����

//��ϰ5��������ϰ
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("please input the password:>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)// == ���������Ƚ��ַ�������
		{
			printf("������ȷ����¼�ɹ���");
			break;
		}
	}
	if (i == 3)
	{
		printf("3������������󣬵�¼ʧ�ܣ�");
	}

	return 0;
}


//��ϰ 4��������ϰ����
//int main()
//{
//	char arr1[] = "Hello World!!!";
//	char arr2[] = "##############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯һ��
//		system("cls");//ִ��ϵͳ�����һ��������cls �������Ļ
//
//		left++;
//		right--;
//	}
//	return 0;
//}

////P8 3.���ֲ��Ҵ���
//int binsearch(int x, int v[], int n)
//{
//	//����ҿ�
//	int low = 0;
//	int high = n;//length - 1
//	while (low < high)//������ҿ��������棬low==highʱ��[low��high)û�����壬���Բ�д�Ⱥ�
//	{
//		int mid = (high + low) / 2;
//		if (v[mid] == x)
//		{
//			return mid;
//		}
//		else if (v[mid] < x)
//		{
//			low = mid + 1;
//		}
//		else 
//		{
//			high = mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int a[6] = { 2,5,7,9,15,17 };
//	int x;
//	int n = sizeof(a) / sizeof(a[0]);//����Ԫ�ظ���
//	printf("please input the number to search:");
//	scanf("%d", &x);
//	int result = binsearch(x, a, n);
//	if (result == -1)
//	{
//		printf("cannot find the number in array!");
//	}
//	else 
//	{
//		printf("find! the index of the number is %d\n", result);
//	}
//	return 0;
//}


//P8 1.����n�Ľ׳�
//int main()
//{
//    int n;
//    int i;
//    int sum = 1;
//    printf("please input n:");
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        sum *= i;
//    }
//    printf("The n! = %d", sum);
//    return 0;
//}

////2.���� 1��+ 2��+...+ 10��
//int main()
//{
//    int i;
//    int sum = 1;
//    int Sum = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        sum *= i;
//        Sum += sum;
//    }
//    printf("1! + 2! +...+10! = %d", Sum);
//    return 0;
//}