#include <stdio.h>  
 #include <stdlib.h>   
 int factorial(int n)  
{  
int res = 1, i;  
for (i = 1; i <= n; i++)  
 res *= i;  
 return res;  
}   int main(int argc, char* argv[])  
{  int n,num, res = 0;   
if (argc == 1) 
printf("No command line arguments found.\n");  
else {    n= atoi(argv[1]);  
printf("%d\n", factorial(num));  
}  return 0;  
}
