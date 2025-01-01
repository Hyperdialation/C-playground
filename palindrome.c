#include<stdio.h>
void main()
{
    int n,temp,rev=0,rem;
    printf("Enter the number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("The number %d is palindrome",rev);
    }
    else
    {
        printf("The number %d is not palindrome",temp);
    }
}