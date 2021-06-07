#include <stdio.h>
int main()
{
    int r1,c1,r2,c2;
    printf("enter the order of first matrix");
    scanf("%d",&r1);
    scanf("%d",&c1);
    printf("enter the order of second matrix");
    scanf("%d",&r2);
    scanf("%d",&c2);
    if(c1==r2)
    {
     float a1[r1][c1],a2[r2][c2],arr[r1][c2];
     printf("enter first matrix row wise\n");
     for(int i=0;i<r1;i++)
      {
          for(int j=0;j<c1;j++)
         {
                scanf("%f",&a1[i][j]);
         }
      }
      printf("enter second matrix row wise\n");
     for(int i=0;i<r2;i++)
      {
          for(int j=0;j<c2;j++)
         {
                scanf("%f",&a2[i][j]);
         }
      }
        for(int i=0;i<r1;++i) 
      {   
            for(int j=0;j<c2;++j)    
            {    
                arr[i][j]=0;
            }
      }   
      for(int i=0;i<r1;++i) 
      {   
            for(int j=0;j<c2;++j)    
            {    
                for(int k=0;k<c1;++k)    
                {    
                    arr[i][j]+=a1[i][k]*a2[k][j];    
                }    
            }    
        }    
        printf("multiplication of matrices =\n");
     for(int i=0;i<r1;i++)
      {
          for(int j=0;j<c2;j++)
         {
                printf("%f ",arr[i][j]);
         }
         printf("\n");
      }
    }
    else printf("these can't be multiplied");
    return 0;
}