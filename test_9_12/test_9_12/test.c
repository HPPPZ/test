#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		if (strcmp(password ,"123456")==0)
		{
			printf("登录成功\n");
			break;
		}
	}
	if (i == 3)
		printf("三次密码均错，退出程序\n");
	return 0;
}
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//    int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标为%d\n",i);
//			break;
//		}
//	}
//	if (i== sz)
//		printf("没找到\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("haha\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password); \
//		while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认（N/Y）:>");
//	ret = getchar();
//	if (ret =='Y')
//		printf("确认成功\n");
//	else
//
//		printf("放弃确认\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch< '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//		for (i = 1; i <= 10; i++)
//	{
//			/*if (i == 5)
//				continue;*/
//			printf("%d ", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	for (;;)
//		printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (; i < 10; i++)
//	{
//		for (j=0; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)
//	{
//		printf("hehe");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i - 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//	}
//	return 0;
//}
//int main()
//{
//	int i, n;
//	double sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		sum = sum * i;
//	printf("%d\n", n);
//	printf("%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
	/*for (n = 1; n <= 3; n++)
	{
		ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}*/
	/*for (n = 1; n <= 3; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("sum=%d\n", sum);
	return 0;
}*/