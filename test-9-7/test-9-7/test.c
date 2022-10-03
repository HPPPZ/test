#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//int main()
//{
//	int num1=0;
//	int num2=0;
//	int sum=0;
//	scanf("%d%d",&num1,&num2);
//	sum=num1+num2;
//printf("sum=%d\n",sum);
//return 0;
//}
//int Add(int x,int y)
//{
//int z=x+y;
//return z;
//}
//int main()
//{
//int num1=10;
//int num2=20;
//int sum=0;
//int a=100;
//int b=200;
//sum=Add(num1,num2);
////sum=Add(a,b);
//printf("sum=%d\n",sum);
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	//printf("%d\n",arr[4]);
//int i=0;
//while (i<10)
//{
//printf("%d ",arr[i]);
//i++;
//
//}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a=1;
//	int b=a<<2;
//	printf("%d\n",b);
//	printf("%d\n",a);
//	int a=3;
//	int b=5;
//	int c=a^b;
//	printf("%d\n",c);
//	
//	int arr[10]={0};
//	printf("%d\n",sizeof(arr));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//int num1=10;
//int num2=20;
//if (num1>num2)
//	printf("最大值为%d\n",num1);
//else
//	printf("最大值为%d\n",num2);
//return 0;
//}
//#include<stdio.h>
//int Max(int x,int y)
//	if (x>y)
//		return x;
//	else 
//		return y;
//int main()
//{
//int num1=10;
//int num2=20;
//int max=0;
//max=Max(num1,num2);
//printf("最大值为%d\n",max);
//return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//int a=10;
//int arr[]={1,2,3,4,5,6};
////printf("%d\n",sizeof(a));
////printf("%d\n",sizeof(int));
////printf("%d\n",sizeof a);
//printf("%d\n",sizeof(arr));
//return 0;
//}
//#include<stdio.h>
//int main()
//{
//int a=0;
//int b=~a;
//printf("%d\n",b);
//return 0;
//}
//#include<stdio.h>
//int main()
//{
//   int a=10;
//   //int b=++a;
//   //int b=--a;
//   int b=a--;
//   printf("a=%d b=%d\n",a,b);
//   return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a=0;
//	int b=8;
//    // int c=a && b;
//	int c=a || b;
//	 printf("c=%d\n",c);
//	 return 0;
//		
//}
//#include<stdio.h>
//int main()
//{
//int a=10;
//int b=20;
//int max=0;
////max=(a>b ? a : b);
//if (a>b)
//	max=a;
//else 
//	max=b;
//printf("%d\n",max);
//return 0;
//}
//#include<stdio.h>
//int Add(int x,int y)
//{
//	int z=0;
//	z=x+y;
//return z;
//}
//int main()
//{
//int a=10;
//int b=20;
//int sum=Add(a,b);
//printf("sum=%d\n",sum);
//return 0;
//}
//#include<stdio.h>
//void test()
//{
//  //  int a=1;
//  static int a=1;//a为静态局部变量
//	a++;
//     printf("a=%d\n",a);
//}
//int  main()
//{
//     int i=0;
//    while (i<5)
//	{
//       test();
//           i++;
//    }
//return 0;
//}
//#include<stdio.h>
//extern int Add(int,int);
//int main()
//{
//int a=10;
//int b=20;
//int sum=Add(a,b);
//printf("sum=%d\n",sum);
//return 0;
//}
//#include<stdio.h>
////int Max(int x,int y)
////{
////	if (x>y)
////		return x;
////	else
////		return y;
////}
//#define MAX(X,Y) (X>Y?X:Y)
//	int main()
//{
//int a=10;
//int b=20;
//	//int max=Max(a,b);
//int max=MAX(a,b);
//printf("max=%d\n",max);
//return 0;
//}
#include<stdio.h>
//int main()
//{ 
//int a=10;
////printf("%p\n",&a);
//int* p=&a;
////printf("%p\n",&a);
////printf("%p\n",p);
//*p=20;
//printf("a=%d\n",a);
//return 0;
//}
//int main()
//{
//char ch='w';
//char* pc=&ch;
//*pc='q';
////printf("%c\n",ch);
//printf("%d\n",sizeof(pc));
//return 0;
//}
//#include<stdio.h>
//int main()
//{
//int a=10;
////printf("%p\n",&a);
//int* p=&a;
////printf("%p\n",p);
//*p=20;
//printf("a=%d\n",a);

//	double d=3.14;
//	double* pb=&d;
//	printf("%d\n",sizeof(pb));
//	/**pb=5.5;
//	printf("%lf\n",d);*/
//return 0;
//}
//#include<stdio.h>
//#include<string.h>
//struct Book
//{
//char name[20];
//short price;
//};
//int main()
//{
//	struct Book B1={"C语言设计",55};
//	strcpy(B1.name,"C++");
//	printf("%s\n",B1.name);
//	/*struct Book* pb=&B1;
//	printf("书名：%s\n",pb->name);
//	printf("价格:%d\n",pb->price);*/
//	/*printf("书名：%s\n",(*pb).name);
//	printf("价格:%d\n",(*pb).price);*/
//	/*printf("书名：%s\n",B1.name);
//	printf("价格:%d\n",B1.price);*/
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int age=50;
//if(age<18)
//	printf("未成年\n");
//else
//	printf("成年\n");
//	if (age<18)
//		printf("未成年\n");
//	else if (age>=18 && age<28)
//	printf("青年\n");
//	else if (age>=28 && age<50)
//	printf("壮年\n");
//	else if (age>=50 && age<90)
//	printf("老年\n");
//	else
//		printf("老不死\n");
//return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int num=4;
////if (num=5)
////  {
////	  printf("hehe\n");
////  }
//    if (5==num)
//	{
//		printf("hehe\n");
//	}
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	while(i<=100)
//	{
//		//if (i%2==1)
//		//	printf("%d ",i);
//		//i++;
//		printf("%d ",i);
//		i+=2;
//	}
//	return 0;
//}	
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
//	switch(day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//while (1)
//	//	printf("hehe\n");
//	int i=1;
//	while(i<11)
//	{
//		if(i==5)
//			//break;
//			continue;
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int ch=getchar();
	putchar(ch);
	printf("%c\n",ch);
	return 0;
}