#include<stdio.h>
int sod(int a)
{
    if(a==0) return 0;
    else return (a%10+sod(a/10));
}
void main()
{
	int num;
	printf("enter a no");
	scanf("%d",&num);
	printf("sum of digits of the number %d is %d",num,sod(num));
}
	