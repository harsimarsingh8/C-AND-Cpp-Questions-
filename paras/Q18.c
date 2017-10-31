/*merge sort */




#include<stdio.h>
void main()
{
    int i,j,k,m,n;
    printf("enter size of frst array and second array");
    scanf("%d %d",&m,&n);
    int z= m+n;
    int a[m],b[n],c[z];
    printf("enter sorted elements in array1:");
    for(j=0;j<m;j++)
    {
        scanf("%d\n",&a[j]);
    }
    printf("\nenter sorted elements in array2:");
    for(j=0;j<n;j++)
    {
        scanf("%d\n",&b[j]);
    }
    i=0;
    j=0;
    k=0;
    while(j<m && k<n)
    {
        if(a[j]>b[k])
        {
            c[i]=b[k];
            k++;

        }
        else{
            c[i]=a[j];
            j++;
        }
        i++;
    }
    while(j<m)
    {
        c[i]=a[j];
        j++;
    }
    while(k<n);
    {
        c[i]=b[k];
        k++;
    }
    printf("merged:\n");
    for(i=0;i<z;i++)
    {
        printf("%d ",c[i]);
    }
}
