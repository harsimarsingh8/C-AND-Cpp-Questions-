//BITCOUNT


#include<stdio.h>
main()
{
    int num1,n,x,num2,y;
    int count=0;
    printf("enter number to change");
    scanf("%d",&num1);
    printf("enter number to change into");
    scanf("%d",&num2);


    x= num1^num2;
    for(n=1;n<=32;n++)
    {



    y= x&(1<<n-1);

    if(y>0)
    {
        count=count+1;
    }

    }
    printf("%d",count);
}
