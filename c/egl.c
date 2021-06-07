#include<stdio.h>
#include<conio.h>
int main()
{
	
	int p,c,m;
	printf("enter the values of physics, chemistry and maths ");
	scanf("%d",&p);
	scanf("%d",&c);
	scanf("%d",&m);
	if(p>40&&c>50&&m>60&&(p+m)>150&&(p+m+c)>200)
	{
		printf("you are egligible");
	}
	else printf("you are not egligible");
	return 0;
}

		