#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,s,i;
	printf("enter the values of a b c\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	s=(a+b+c)/2;
	i=sqrt(s*(s-a)*(s-b)*(s-c));

	printf("area of triangle is %f",i);
}