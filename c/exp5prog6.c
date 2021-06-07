#include<stdio.h>
#include<string.h> 
void main() 
{ 
    int n,i,flag=0; 
    char str[101]; 
    printf("Enter a string\n"); 
    gets(str); 
    n=strlen(str); 
    for(i=0;i<n;i++) 
    { 
        if(str[i]!=str[n-i-1]) 
        { 
            flag=1; 
            break; 
        } 
    } 
        printf("Is the string a palindrome?\n"); 
        if(flag==0) 
        { 
            printf("YES"); 
        } 
        else 
        { 
            printf("NO"); 
        }    
} 
