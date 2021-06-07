#include<stdio.h>
int main()
{
	char str[100];
	printf("enter a sring\n");
	scanf("%s",str);
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	printf("%d",i);
}