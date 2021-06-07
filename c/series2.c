#include<stdio.h>
int factorial(int a)
{
	int temp=1;
	for(int i=a;i>0;i--)
	{
		temp=temp*i;
	}
	return temp;
}
int main()
{
    float sum=0,n,x;
    printf("enter the value of number of n and x");
    scanf("%f%f",&n,&x);
    for(float i=1;i<=n;i++)
    {
        sum=sum+x*i/(factorial(i));
    }
    printf("%f",sum+1);
    return 0;
}