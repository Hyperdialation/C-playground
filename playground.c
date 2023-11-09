#include<stdio.h>
#include<stdlib.h>

void  main()
{
    int x,n,rem,temp;
    printf("Enter the input number\n");
    scanf("%d",&x);
    n=2;
    rem=1;
    while(n<x || rem<0)
    {
        temp=x/n;
        rem=temp%10;
        n=n+1
        if(rem==0)
    }
    
    

}