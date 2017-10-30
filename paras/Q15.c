
#include<stdio.h>
void main()
{
    int m,rows,k,s,i;

    printf("enter number");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(s=1;s<=i;s++)
        {
            printf("*");
        }
        printf("\n");
    }
}
