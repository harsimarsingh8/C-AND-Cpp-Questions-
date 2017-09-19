//anagram in c language code//



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

    for(i=0;i<x;i++)
    {

        p=str1[i];


            if(p>=65 && p<=91)
            {
                r1[p-65]++;
            }
            else if(p>=97 && p<=122)
            {
                r1[p-97]++;
            }


    }
    for(i=0;i<y;i++)
    {

        q=str2[i];


            if(q>=65 && q<=91)
            {
                r2[q-65]++;
            }
            else if(q>=97 && q<=122)
            {
                r2[q-97]++;
            }


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


