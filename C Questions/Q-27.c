/_/insertion sorting concept//

#include<iostream>
void main()
{
	int i,n,swap=0,j;
	printf("Enter the total no. of elements in an array");
	scanf("%d",&n);
	int arr[n];
	scanf("%d",&arr[0]);
	for(i=1;i<n;i++)
	{
		scanf("%d",&arr[i]);
			for(j=0;j<=i;j++)
		{
		if(arr[j]<arr[i])
		{
			swap=arr[j];
			arr[j]=arr[i];
			arr[i]=swap;
		}
	}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
