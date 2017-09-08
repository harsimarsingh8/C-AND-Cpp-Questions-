//Question 11: 
// C Program to Check if a given Integer is Power of 2 using Bitwise Operators. .



#include<stdio.h>
void main()
{
  int n,count=0;
  printf("Enter the no");
  scanf("%d",&n);
  while(n!=0)
   {
    if(n&1)
    count++;
    n=n>>1;
   }
   if(count==1)
      printf("The no is power of two");
  else
    printf("Not power of two");
}
   
