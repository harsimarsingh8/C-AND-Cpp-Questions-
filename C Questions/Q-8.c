//Question 8: 
// WAP to print nth bit of a given integer.


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

