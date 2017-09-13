//Question 13: 
// Write a C program to find the factorial of a number, where the number is entered by user.


#include<stdio.h>
int fb(int n)
    { 
      int c, fact = 1;
      for (c = 1; c <= n; c++)
      fact = fact * c; 
      return fact;
       }
    void main()
         {
          int a,b;
          printf("Enter the no");
          scanf("%d",&a);
          b=fb(a);
         printf("Factorial=%d",b);

         }

