/*AIM: Calculate transpose of a matrix */

#include<stdio.h>
main()
{
    int a[3][3],b[3][3],r[3][3],i,j,c,d;
    printf("\nenter element of frst array");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

            scanf("%d",&a[i][j]);

        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            r[j][i]=a[i][j];

        }
    }
    printf("\nentered array=\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nans array=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",r[i][j]);

        }
        printf("\n");
    }

}
