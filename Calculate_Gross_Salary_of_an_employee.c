#include<stdio.h>
int main()
{
    float bs,hra,da;
    float pf,gs;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=0.12*bs;
    gs=pf+hra+bs+da;
    printf("%0.2f
%0.2f",pf,gs);
}