#include<stdio.h>
void main() 
{ 
    int mat[12][12],transpose[12][12]; 
    int i,j,row,col,flag=1; 
    printf("Enter the number of rows and columns for 1st matrix\n"); 
    scanf("%d%d",&row,&col); 
    printf("Enter the elements of the matrix\n"); 
    for(i=0;i<row;i++) 
    { 
        for(j=0;j<col;j++) 
        { 
            scanf("%d",&mat[i][j]); 
        } 
    } 
  
    printf("The matrix\n"); 
    for(i=0;i<row;i++) 
    { 
        for(j=0;j<col;j++) 
        { 
            printf("%d\t",mat[i][j]); 
        } 
        printf("\n"); 
    } 
    //To find transpose 
    for(i=0;i<row;i++) 
    { 
        for(j=0;j<col;j++) 
        { 
            transpose[j][i]=mat[i][j]; 
        } 
    } 
    printf("The transpose matrix\n"); 
    for(i=0;i<col;i++) 
    { 
        for(j=0;j<row;j++) 
        { 
            printf("%d\t",transpose[i][j]); 
        } 
        printf("\n"); 
    } 
     
    if(row==col) 
    { 
        for(i=0;i<row;i++) 
        { 
            for(j=0;j<col;j++) 
            { 
                if(mat[i][j]!=transpose[i][j]) 
                { 
                    flag=0; 
                    break; 
                } 
            } 
            if(flag==0) 
            { 
                printf("\nThe matrix is not symmetric"); 
                break; 
            } 
        } 
        if(flag==1) 
        { 
            printf("\nThe matrix is symmetric"); 
        } 
    } 
    else 
    { 
        printf("\nThe matrix is not symmetric"); 
    } 
} 
