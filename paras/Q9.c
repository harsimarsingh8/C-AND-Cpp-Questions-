//tower of hanoii


#include<stdio.h>

int toh(int n,char from,char to,char via )
{


    if(n==1)
    {


        printf("%c -> %c\n",from,to);
        return 1;
    }
    else
    {

        return toh(n-1,from,via,to)+toh(1,from,to,via)+toh(n-1,via,to,from);
    }

}
int main()
{
    int n,res;

    scanf("%d",&n);
    res=toh(n,'A','C','B');
    printf("\ntotal steps=%d",res);
}
