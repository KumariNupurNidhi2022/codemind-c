#include<stdio.h>
int main()
{
    int a,b,i,max=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a && i<=b;i++)
    {
       if(a%i==0 && b%i==0)
       {
           max=i;
       }
    }
    printf("%d",max);
}