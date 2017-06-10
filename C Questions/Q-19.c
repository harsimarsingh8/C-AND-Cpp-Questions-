//  Question 19: 
//  C Program to Convert Binary Number to Decimal and Decimal to Binary

#include<stdio.h>
void decimal();
void binary();
void main()
{
   int ch;
   printf("Enter the choice");
   printf("\n1.Decimal to binary");
    printf("\n2.Binary to decimal\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
         decimal();
        break;
    case 2:
           binary();
       break;
     default:printf("You have entered wrong Choice");
}
}
void decimal()
     {
       int n,rem,b=0,i=1;
        printf("Enter the no");
        scanf("%d",&n);
        while(n!=0)
        {
            rem=n%2;
            n=n/2;
            b=b+(rem*i);
            i=i*10;
        }
         printf("%d",b);
     }
void binary()
     {
       int n,rem,b=0,i=1;
       printf("Enter the no");
       scanf("%d",&n);
       while(n!=0)
           {
            rem=n%10;
            n=n/10;
            b=b+(rem*i);
            i=i*2;
           }
         printf("%d",b);
   }
