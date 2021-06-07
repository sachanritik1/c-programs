	#include<stdio.h>
	#include<string.h>
	void main()
	{ FILE *fpa, *fpb;
	char c,b,name[20],outf[20];
	int s=0;
	printf("enter the file name to be opened: \n");
	scanf("%s",name);
	printf("enter the file name to be copied: \n");
    scanf("%s",outf);
	fpa=fopen(name,"r");
	fpb=fopen(outf, "w");
	if(fpa==NULL)
	{ printf("Error opening the read mode file! \n"); }
	printf("File:%s in read mode opened! \n", name);
	if(fpb==NULL)
	{ printf("Error opening the write mode file! \n"); }
	printf("File:%s in write mode opened open! \n",outf);
	c=fgetc(fpa);
	while(c!=EOF)
	{ fputc(c,fpb);
	c=fgetc(fpa);
	s=s+1;}
	printf("Contents are copied to the second file! \n The number of counted char are:%d",s);
	fclose(fpa);
	fclose(fpb);
}
