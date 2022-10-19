#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//int* arr[10];//指针数组
//	//int* (*pa)[10] = &arr;//数组指针
//	int(*pAdd)(int,int)=Add;//函数指针
//	//int sum = (*pAdd)(2, 5);
//	//int sum = pAdd(1, 2);
//	//int sum = Add(1, 2);
//	//printf("%d\n", sum);
//	//int(*pArr[5])(int, int)
//
//	return 0;
//}
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for(i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void qsort(void* base,
//	size_t num,
//	size_t width,
//	int(*cmp(const void* e1, const void* e2)));
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int cmp_float(const void* e1, const void* e2)
//{
	//return *(float*)e1 - *(float*)e2;
	//if (*(float*)e1 == *(float*)e2)
	//	return 0;
	//else if (*(float*)e1 > *(float*)e2)
	//	return 1;
	//else
	//	return -1;
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
//int test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz;j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
//}
//void test3()
//{
//	struct Stu s[3] = { {"zhansan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//		int j = 0;
//		for (j = 0; j < sz;j++)
//		{
//			printf("%s %d ", s[j].name,s[j].age);
//		}
//}
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}