/*AIM: To find sum of series (1+(1+1/2)+(1+1/2+1/3)+..)*/
/*NAME: NITISH GOYAL */
/*AIM: 1510991422 */
#include<stdio.h>
void main()
{
    float m,n,sum=0,a;

    printf("enter number");
    scanf("%f",&n);

    for(m=n;m>=1;m--)
    {
        a=(1/m);
        sum=sum+a;
    }
    printf("%f",sum);

}
