#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//int main()
//{
//	double a = 5.0 / 2;
//	printf("a=%lf\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 16;
//	int b = a >> 1;//右移
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	int b = a << 1;//左移
//	printf("b=%d\n", b);
//	return 0;
//}
//int main()
//{
//	/*int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("%d\n", c);*/
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	char b = 'W';
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));
//	return 0;
//}
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	return 0;
//}
//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	//printf("%d\n", ++a);//先加加，后使用
//	printf("%d\n", a++);
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(int ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;//&&逻辑与，||逻辑或
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i= a++ || ++b || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//    return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	max = (a > b ? a : b);
//	return 0;
//}
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	//使用struct Stu这个结构体类型创建了一个学生对象S1;
//	struct Stu s1 = { "张三",20,"22102365" };
//	struct Stu* ps = &s1;
//	printf("%s\n", (*ps).name);
//	printf("%s\n", ps->name);
//	/*printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	printf("%s\n", s1.name);*/
//	return 0;
//}
int main()
{
	char a = 3;
	char b = 127;
	char c = a + b;
	printf("%d\n", c);
	return 0;
}