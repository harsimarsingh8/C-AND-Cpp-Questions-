//Question 12: 
// WAP to swap two numbers using bitwise XOR Operator.


#include<stdio.h> 
void main()
{
	 int i,j,k;
	 printf("Enter the number i and j: ");
	 scanf("%d %d",&i,&j);
	 i=i^j;
	 j=i^j;
	 i=i^j;
	 printf("i= %d ; j = %d\n",i,j);
}
