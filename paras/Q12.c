/*AIM: To find sum of series (1+(1+2)+(1+2+3)+..)*/
/*NAME: NITISH GOYAL */
/*AIM: 1510991422 */
#include<stdio.h>
int as(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
void main()
{
    int n,x,s=0;

    printf("enter number");
    scanf("%d",&n);

    for(x=1;x<=n;x++)
    {
        s=s+as(x);
    }
    printf("%d",s);

}
