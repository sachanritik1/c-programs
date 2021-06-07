#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	char str[100];
	printf("enter a sring\n");
	scanf("%s",str);
	str[100]=strrev(str);
	printf("%s",str);
	return 0;
}
