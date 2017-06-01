//Question 10: 
// WAP to find the number of trailing zeros in a given integer in (Binary format) .


#include<stdio.h>
int main()
   {
     int n,bit;
     printf("Enter the no");
     scanf("%d",&n);
     printf("Enter the bit position");
     scanf("%d",&bit);
     n=n>>(bit-1);
     printf("Nth bit =%d",n&1);
   }
