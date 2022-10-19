#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr));//err
	printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr+0));
	//printf("%d\n", sizeof(*arr));
	//printf("%d\n", sizeof(arr[1]));
	//printf("%d\n", sizeof(&arr));
	//printf("%d\n", sizeof(&arr+1));
	//printf("%d\n", sizeof(&arr[0]+1));
	return 0;
}