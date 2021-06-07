#include<stdio.h>
void main()
{
	int num,arr[5];
    printf("enter a five digit number\n");
    scanf("%d",&num);
    for(int i=4;i>=0;i--)
    {
        arr[i]=num % 10;
        num=num/10;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
	
}