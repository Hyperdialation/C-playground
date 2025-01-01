#include<stdio.h>

int sum(int a,int b)
{

    return a+b;
}
int main()
{
    int x,y;
    printf("Enter the two number for addition: ");
    scanf("%d%d", &x, &y);
    
    printf("%d\n", sum(x,y));
    return 0;
}
