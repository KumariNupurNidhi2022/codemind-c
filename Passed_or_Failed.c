#include<stdio.h>
int main()
{
    int p,c,m,e,cs;
    scanf("%d%d%d%d%d",&p,&c,&m,&e,&cs);
    if(p>34 && c>34 && m>34 && e>34 && cs>34)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}