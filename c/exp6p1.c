	#include<stdio.h>
	#include<conio.h>
    struct date
	{
	int day;
	int month;
	int year;
	};
	void
	main ()
	{
	struct date d1, d2;
	printf ("Enter first date(dd/mm/yyyy):");
	scanf ("%d%d%d", &d1.day, &d1.month, &d1.year);
	printf ("nEnter second date(dd/mm/yyyy):");
	scanf ("%d%d%d", &d2.day, &d2.month, &d2.year);

	if ((d1.day == d2.day) && (d1.month == d2.month) && (d1.year == d2.year))
	printf ("nEQUAL");
	else
	printf ("nUNEQUAL");
}
