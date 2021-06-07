#include <stdio.h> 
#include <stdlib.h> /* atoi */ 
 
// Function to Find the sum of digits 
int findSumOfDigits(int num) 
{ 
int sum = 0;  
while (num > 0) { 
 sum = sum + (num % 10); 
num = num / 10; } 
return sum; 
} 
int main(int argc, char* argv[]) 
{ 
 int num; 
if (argc == 1) 
printf("No command line arguments found.\n"); 
num = atoi(argv[1]);  
printf("%d\n", findSumOfDigits(num)); 
}  

