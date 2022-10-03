#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
#include<math.h>
#include"Add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//int main()
//{
//	/*int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);*/
//	printf("%d\n", strlen("abc"));
//	return 0;
//}
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//
//	return 0;
//}
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if(arr[mid]>k)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是： %d\n", ret);
//	}
//	return 0;
//}
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//			printf("%d ", year);
//	}
//	return 0;
//}
//int is_prime(int n)
//{
//	int j = 0;
//	//for (j = 2; j < n; j++)
//	for (j = 2; j <= sqrt(n); j++)//sqrt返回正的平方根
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//void swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	 tmp=*pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//	//swap1(a, b);
//	swap2(&a, &b);
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	max = (100, 300);
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()
//{
//	char arr[] = "hellow world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	char arr1[20] = "#########";
//	char arr2[20] = "hi bit";
//	strcpy(arr2, arr1);
//	printf("arr2=%s\n", arr2);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	scanf("%d%d", &a, &b);
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int u = 0;
//	scanf("%d", &u);
//	printf("%d\n", u);
//	return 0;
//}