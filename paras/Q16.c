/*AIM: Pattern 3 */

#include<stdio.h>
void main()
{
    int m,rows,k,s,i;

    printf("enter number");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        k=0;
        for(s=i;s<=rows-1;s++)
        {
            printf("  ");
        }
        while(k!=2*i-1)
        {
            printf(" *");
            k++;
        }
        printf("\n");

    }

    for(i=rows-1;i>=1;i--)
    {
        k=(2*i)-1;
        for(s=rows-1;s>=i;s--)
        {
            printf("  ");
        }
        while(k!=0)
        {
            printf(" *");
            k--;
        }
        printf("\n");

    }

}
