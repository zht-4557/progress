#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	return;
}
int main01() 
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("swap a = %d, b = %d\n", a, b);
	return 0;



 }