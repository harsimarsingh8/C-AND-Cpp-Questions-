//Question 16: 
//  C Program to Display Fibonacci Series.

#include<stdio.h>
void fb(int n)
    {
      int a=0,b=1,c=0,i;
      for(i=3;i<=n;i++)
      {
       c=a+b;
       a=b;
       b=c;
       printf(",%d",c);
    }
    }
    void main()
      {
        int a;
        printf("Enter the no :");
        scanf("%d",&a);
        fb(a);
      }
