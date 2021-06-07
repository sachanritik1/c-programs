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
		for(i=0;i<n;i++)
		{
			if(arr[0]>arr[i])
			{
				temp=arr[0];
				arr[0]=arr[i];
				arr[i]=temp;
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
