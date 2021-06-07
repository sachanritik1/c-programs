#include<stdio.h>
int b(int a)
{
	int i,temp;
	temp=1;
	for(i=a;i>0;i--)
	{
		temp=temp*i;
	}
	return temp;
}
void main ()
{
	int n,r,p,q,t;
	printf("enter the value of n and r to find the values of \n n     n \n  c     P \n   r     r\n");
	scanf("%d",&n);
	scanf("%d",&r);
	if (n>=r)
	{
	   p=b(n);
	   q=b(r);
	   t=b(n-r);
	   printf("%d\n",p/(q*t));
	   printf("%d\n",p/t);
	}
	else
	{
		printf("the value of r can't br greater than n");
	}
}