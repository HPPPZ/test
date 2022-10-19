#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	float f = 10.0;
//	return 0;
//}
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test(100);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大段\n");
//	}
//	return 0;
//}
//int check_sys()
//{
//	int a = 1;
//	/*char* p = (char*)&a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;*/
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
////}
//int main()
//{
//	int a = 0x11223344;
//	//int* p = &a;
//	//*p = 0;
//	char* p = &a;
//	*p = 0;
//	return 0;
//}
int main()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));
	return 0;
}
