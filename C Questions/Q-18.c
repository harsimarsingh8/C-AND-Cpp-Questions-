//Question 16: 
// WAP to find whether a number is Armstrong or not.

#include <stdio.h>
void armstrong(int);
void main()
{
    int a;
    printf("Enter any no: ");
    scanf("%d", &a);
    armstrong(a);
}

void armstrong(int n)
    {
        int  photo, rem, result = 0;
        photo=n;
    while (n!= 0)
    {
        rem = n%10;
        result=result+rem*rem*rem;
         n=n/10;
    }

    if(result == photo)
        printf("%d is an Armstrong number.",photo);
    else
        printf("%d is not an Armstrong number.",photo);
}
