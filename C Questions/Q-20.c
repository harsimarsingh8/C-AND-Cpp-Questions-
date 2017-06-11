//  Question 20: 
//  C Program to Convert Octal Number to Decimal and Decimal to Octal.

#include<stdio.h>
void decimal();
void octal();
void main()
{
    int ch;
   printf("Enter the choice");
   printf("\n1.Decimal to Octal");
    printf("\n2.Octal to decimal\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
          decimal();
        break;
    case 2:
           octal();
       break;
     default:printf("You have entered wrong Choice");
}
 }
void decimal()
     {       int n,rem,b=0,i=1;
        printf("Enter the no");
        scanf("%d",&n);
        while(n!=0)
        {
            rem=n%8;
            n=n/8;
            b=b+(rem*i);
            i=i*10;
        }
         printf("%d",b);
     }
void octal()
     {
       int n,rem,b=0,j=0;
       printf("Enter the no");
       scanf("%d",&n);
       while(n!=0)
           {
            rem=n%10;
            n=n/10;
            b=b+(rem*pow(8,j));
            ++j;
           }
           printf("%d",b);
}

