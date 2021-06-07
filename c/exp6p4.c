	#include<stdio.h>
	#include<string.h>
	#include<conio.h>
	struct cricket
	{
	char pname[20];
	char tname[20];
	float bavg;
	};
	int
	main ()
	{
	struct cricket s[5], t;
	int i, j, n = 5;
	float p;
	printf ("\nEnter data of %d players", n);
	for (i = 0; i < n; i++)
	{
	printf ("\nEnter PName TName BAvg for player-%d = ", i + 1);
	scanf ("%s %s %f", s[i].pname, s[i].tname, &p);
	s[i].bavg = p;
	}
	for (i = 1; i <= n - 1; i++)
	{
	for (j = 1; j <= n - i; j++)
	{
	if (strcmp (s[j - 1].tname, s[j].tname) > 0)
	{
	t = s[j - 1];
	s[j - 1] = s[j];
	s[j] = t;
	}
	}
	}
	printf ("\nAfter teamwise sorting... Player list is ");
	for (i = 0; i < n; i++)
	{
	printf ("\n%-20s %-20s %.2f", s[i].pname, s[i].tname, s[i].bavg);
	}
	getch ();
	return 0;
	}
