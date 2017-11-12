/*magic square */


#include<stdio.h>
void main()
{
    int N,count=1,i,j,l,m;
    scanf("%d",&N);
    int a[N][N];
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            a[i][j]=0;
        }
    }
    i=N/2;
    j=N-1;
    while(count<=N*N)
    {
        if(i>=0 && j==N)
        {
            j=0;
        }
        if(i<0 && j<N)
        {
            i=N-1;
        }
        if(i<0 && j>=N)
        {
            i=0;
            j=N-2;
        }
        if(a[i][j]!=0)
        {
            i=i+1;
            j=j-2;
            continue;
        }
        a[i][j]=count++;
        i=i-1;
        j=j+1;
    }
    for(l=0;l<N;l++)
    {
        for(m=0;m<N;m++)
        {
            printf("%d ",a[l][m]);
        }
        printf("\n");
    }
}
