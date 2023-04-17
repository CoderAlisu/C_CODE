#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<Windows.h> //包含Sleep
#include<stdlib.h> //包含system函数

//练习5——再练习
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("please input the password:>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)// == 不能用来比较字符串！！
		{
			printf("输入正确，登录成功！");
			break;
		}
	}
	if (i == 3)
	{
		printf("3次密码输出错误，登录失败！");
	}

	return 0;
}


//练习 4——再练习！！
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
//		Sleep(1000);//睡一秒
//		system("cls");//执行系统命令的一个函数，cls 是清空屏幕
//
//		left++;
//		right--;
//	}
//	return 0;
//}

////P8 3.二分查找代码
//int binsearch(int x, int v[], int n)
//{
//	//左闭右开
//	int low = 0;
//	int high = n;//length - 1
//	while (low < high)//在左闭右开区间里面，low==high时，[low，high)没有意义，所以不写等号
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
//	int n = sizeof(a) / sizeof(a[0]);//数组元素个数
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


//P8 1.计算n的阶乘
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

////2.计算 1！+ 2！+...+ 10！
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