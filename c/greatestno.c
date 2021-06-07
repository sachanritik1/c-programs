#include <stdio.h>
int max(int x, int y) 
{ 
    if (x > y)
	{ 
      		return x;
	} 
    else
	{
      		return y;
	} 
}
void main()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	printf("%d",max(max(a,b),max(b,c)));
}
	