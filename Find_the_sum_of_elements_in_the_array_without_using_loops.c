#include<stdio.h>
int main()
{
    int n,i,sum=0;
    int x[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+x[i];
    }
    printf("%d",sum);
}