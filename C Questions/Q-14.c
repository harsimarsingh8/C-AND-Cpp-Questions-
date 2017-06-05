//Question 14: 
// WAP to check whether a number is palindrome or not.

#include<stdio.h>
void main()
     {
     void pb(int);
       int a;
       printf("Enter the no: ");
       scanf("%d",&a);
       pb(a);
      }
void pb(int n)
    {
      int photo,rem,rev=0;
      photo=n;
      while(n!=0)
            {
              rem=n%10;
              n=n/10;
              rev=rev*10+rem;
            }
            if(photo==rev)
            {
                printf("The No  is Palindrome ");
            }
            else
                printf("The No is not Palindrome");
     }
