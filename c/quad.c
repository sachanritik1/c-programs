#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	printf("enter the values of a,b,c in quadratic equation\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	float x1,x2;
	x1=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
	x2=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
	printf("Roots of equation are x1=%f x2=%f",x1,x2);
}
 