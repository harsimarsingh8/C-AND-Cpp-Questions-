/*strcmp */

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[30]="ABC ";
    char str2[30]="ABCD";
    char *s1=str1;
    char *s2=str2;

    int x=strlen(str1);
    int y=strlen(str2);

    if(x>y)
    {
        return 1;
    }
    else if(x<y)
    {
        return -1;
    }

    else if(x==y)
    {
        while(x--)
        {
            if(*s1 > *s2)
            {
                return 1;
            }
            else if(*s1 < *s2)
            {
                return -1;
            }
            else if(*s1==*s2)
            {
                s1++;
                s2++;
            }
        }
        return 0;
    }

}

