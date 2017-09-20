//pattern in code

#include<stdio.h>
#include<math.h>
//int power(int,int);
main()
{
    int n,i=1,sum=0,x;
    printf("enter nth position");
    scanf("%d",&n);
  //  for(n=1;n<=10;n++)
   // {


   while(n)
   {
       x=n&1;
       sum=sum+(power(5,i)*x);
       n=n>>1;
       i++;
   }
   printf("%d ",sum);
   // }
}
int power(int m, int n)          //for correction in power function
{
    int r = 1;
    while(n)
    {
        r  = r*m;
       n--;
    }
    return r;
}
