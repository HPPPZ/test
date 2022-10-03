#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;
//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//int main()
//{
//	stu s1 = {"张三",20,"123456789","男"};
//	struct stu s2 = {"李四",15,"123456789","女"};
//	return 0;
//}
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hellow world",3.14},arr};
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}
typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
void print1(Stu tmp)
{
	printf("name=%s\n", tmp.name);
	printf("age=%d\n", tmp.age);
	printf("tele=%s\n", tmp.tele);
	printf("sex=%s\n", tmp.sex);
}
void print2(Stu* ps)
{
	printf("name=%s\n", ps->name);
	printf("age=%d\n", ps->age);
	printf("tele=%s\n", ps->tele);
	printf("sex=%s\n", ps->sex);
}
int main()
{
	Stu s = { "李四",40,"123456789","男" };
	print1(s);
	print2(&s);
	return 0;
}