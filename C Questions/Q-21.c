//  Question 21: 
//  C Program to Calculate Standard Deviation .

#include <stdio.h>
#include <math.h>
float standard_deviation(float A[], int n);
int main()
{
	int n, i;
	float A[100];
	printf("Enter size of A here: ");
	scanf("%d",&n);
	printf("Enter elements here: ");
	for(i=0; i<n; ++i)
		scanf("%f",&A[i]);
		printf("\n");
		printf("Standard Deviation = %.2f", standard_deviation(A,n));
	return 0;
}
float standard_deviation(float A[], int n)
{
	float mean=0.0, sum_deviation=0.0;
	int i;
	for(i=0; i<n;++i)
	{
		mean+=A[i];
	}
	mean=mean/n;
	for(i=0; i<n;++i)
		sum_deviation+=(A[i]-mean)*(A[i]-mean);
	return (sum_deviation/n);           
}
