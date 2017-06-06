//Question 15: 
// WAP to calculate GCD of two numbers using Euclid’s algorithm.

#include<stdio.h>
void main()
   {
     int gcd(int,int);
     int a,b,c;
     printf("Enter any two number: ");
     scanf("%d%d",&a,&b);
     c=gcd(a,b);
     printf("\nHCF of two number is : %d",c);
    }
int gcd(int x,int y)
     {
       int m,i;
       if(x>y)
         m=y;
      else
         m=x;

    

   for(i=m;i>=1;i--)
        {
          if(x%i==0&&y%i==0){
             return i ;
             break;
        }
     }
    }
 

