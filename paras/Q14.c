/*AIM: Binary search in array */
/*NAME: NITISH GOYAL */
/*ROLL NO: 1510991422 */
#include<stdio.h>

main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},n,s=0,e=9,m;
    printf("enter number to search");
    scanf("%d",&n);

    while(s<=e)
    {
        m=(s+e)/2;
        if(a[m]==n)
        {
            printf("true");
            break;
        }
        else if(a[m]>n)
        {
            e=m-1;
        }
        else if(a[m]<n)
        {
            s=m+1;
        }

    }
if(s>e)
    printf("false");

}

