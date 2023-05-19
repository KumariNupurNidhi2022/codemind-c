#include<stdio.h>  
int main()   
    {   
        int P , R , T , SI ;  
        scanf("%d%d%d%d",&P,&R,&T,&SI);  
        SI  = (P*R*T)/100;   
        printf("%d", SI);  
        return (0);  
    }  