#include<stdio.h>
void main()
{
	int i,n,temp=0;
	printf("enter the size of array");
	scanf("%d",&n);
	int arr[n];
	printf("enter the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<n;j++)
	{
		for(i=0;i<n-j-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
			temp=0;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("min value is %d and max value is %d",arr[0],arr[n-1]);
}
