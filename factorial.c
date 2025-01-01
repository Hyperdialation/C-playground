#include<stdio.h>
void main()
{
    int i,n,fact=1;
    printf("Enter the number");
    scanf("%d",&n);
    if(n<0)
    {
       printf("Factorial doesnt exist");
    }
    else
    {
      for(i=1;i<=n;++i)
      {
        fact=fact*i;
      }
      printf("THe factorial of %d is %d",n,fact);
    }
}