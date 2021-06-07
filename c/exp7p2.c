    #include<stdio.h>
    #include<string.h>
	void main()
	{
	FILE *fpa, *fpb;
	char c,name[20],outf[20];
	int x;
	printf("enter the file containing the integers: \n");
	scanf("%s",name);
	printf("enter the file to display the squares: \n");
	scanf("%s",outf);
    fpa=fopen(name,"r");
	fpb=fopen(outf, "w");
	if(fpa==NULL)
	{
	printf("Error opening the read mode file! \n");
	}
    }