#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//int main()
//{
	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(short*));
	//printf("%d\n", sizeof(int*));
	//printf("%d\n", sizeof(double*));
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *p);
//		p = p + 1;
//	}*/
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p += 2;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
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
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	**ppa = 20;
//	printf("%d\n", a);
//	printf("%d\n", **ppa);
//	return 0;
//}
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr2[3] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", *(arr2[i]));
	}
	return 0;
}