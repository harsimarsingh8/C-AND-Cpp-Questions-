//Question 9: 
// WAP to find the number of trailing zeros in a given integer .


#include<stdio.h>
void main()
{
    int a,count=0;
     printf("Enter the no:");
     scanf("%d",&a);
    while(!(a&1))
     {
        count++;
        a>>=1;
     }
       printf("Trailling Zero=%d",count);
}

