#include<stdio.h>
#include<string.h>

void main()
{
    char str1[30]="Army";
    char str2[30]="MARY";

    int r1[26]={0};
    int r2[26]={0};

    int x=strlen(str1);
    int y=strlen(str2);

    int i,j;
    char p,q;
    if(x==y)
    {


    for(i=0;i<x;i++)
    {

        p=str1[i];
        q=str2[i];


            if((p>=65 && p<=91) && (q>=65 && q<=91))
            {
                r1[p-65]++;
                r2[q-65]++;
            }
            else if((p>=97 && p<=122) && (q>=97 && q<=122))
            {
                r1[p-97]++;
                r2[q-97]++;
            }



    }
    }
    else
    {


        printf("not anagram");
    return 0;
    }


for(i=0;i<26;i++)
{
    if(r1[i]==r2[i])
    {
        continue;
    }
    else
    {
        printf("not anagram");
        return 0;
    }
}
printf("yes its anagram");
return 1;






}



