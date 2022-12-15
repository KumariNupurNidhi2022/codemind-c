#include<stdio.h>
int main()
{
    int n,h,m,s;
    scanf("%d%d",&n,&h);
    h=n/3600;
    m=(n%3600)/60;
    s=(n-(3600*h)-(m*60));
    
    printf("H:M:S-%d:%d:%d",h,m,s);
    
}