#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'w';
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}
//int main()
//{
//	const char* p = "abcdef";
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	char* arr[5];
//	char* (*pc)[5] = &arr;
//	int arr2[10] = { 0 };
//	int (*pa2)[10] = &arr2;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//int(*pa)[10] = &arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*pa + i));
//	//}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}*/
//	return 0;
//}
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", *(p + i));
//		//printf("%d ", *(arr + i));
//		//printf("%d ", arr[i]);
//		printf("%d ", p[i]);
//	}
//	return 0;
//}
//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
//void test2(int arr[3][])//列不可省略
//{}
//void test3(int *arr)//err
//{}
//void test4(int **arr)//err
//{}
//void test5(int (*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	//test(arr);
//	//test1(arr);
//	//test2(arr);
//	//test3(arr);
//	//test4(arr);
//	test5(arr);
//	return 0;
//}
//void test1(int* p)
//{
//
//}
//void test2(char* p)
//{
//
//}
//int main()
//{
//	int a = 0;
//	int* p1 = &a;
//	char ch = 'w';
//	char* pc = &ch;
//	test1(&a);
//	test1(p1);
//	test2(&ch);
//	test2(pc);
//	return 0;
//}
//void test(int **p)
//{}
//int main()
//{
//	int* ptr;
//	test(&ptr);
//	int** pp = &ptr;
//	test(pp);
//	char* arr[10];
//	test(arr);
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
//	int arr[10] = { 0 };
//	int (*p)[10]= &arr;
//	//printf("%d\n", Add(a, b));
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}
//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("hello bit");
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
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));
//	printf("%d\n", (**pa)(2, 3));
//	printf("%d\n", (***pa)(2, 3));
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int* arr[5];//指针数组
//	int (*p)(int, int) = Add;
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", parr[i](4, 2));
//	}
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src);
//
//
//char* (*pf)(char*, const char*);
//char* (*pfArr[4])(char*, const char*);
//void menu()
//{
//	printf("**********************\n");
//	printf("**  1.add    2.sub  **\n");
//	printf("**  3.mul    4.div  **\n");
//	printf("**  5.xor    0.exit **\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int xor(int x, int y)
//{
//	return x ^ y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfarr[])(int, int) = { 0,add,sub,mul,div,xor };//pfarr是函数指针数组
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数：>");
//			scanf("%d%d", &x, &y);
//			int ret = pfarr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}
//void calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数：>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	//int x = 0; 
//	//int y = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		/*printf("请输入两个操作数：>");
//		scanf("%d%d", &x, &y);*/
//		switch (input)
//		{
//		case 1:
//		/*	printf("请输入两个操作数：>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", add(x, y));*/
//			calc(add);
//			break;
//		case 2:
//		/*	printf("请输入两个操作数：>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", sub(x, y));*/
//			calc(sub);
//			break;
//		case 3:
//		/*	printf("请输入两个操作数：>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", mul(x, y));*/
//			calc(mul);
//			break;
//		case 4:
//			/*printf("请输入两个操作数：>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", div(x, y));*/
//			calc(div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//void print(char *str)
//{
//	printf("hehe:%s", str);
//}
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}
