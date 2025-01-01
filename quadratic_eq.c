#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,real,imag,r1,r2,d;
    printf("Enter the values of coefficient a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if (d==0)
    {
        printf("The roots are real and equal\n");
        r1=r2=(-b)/(2*a);
        printf("root1=root2 is %.3f",r1);
    }
    else if(d>0)
    {
        printf("The roots are real and distinct");
        r1=((-b)+sqrt(d))/(2*a);
        r2=((-b)-sqrt(d))/(2*a);
        printf("Root1=%.3f and root2=%.3f",r1,r2);
    }
    else
    {
        printf("The roots are real and imaginary");
        real=(-b)/(2*a);
        imag=(sqrt(fabs(d)))/(2*a);
        printf("root1 is %.3f+i%.3f",real,imag);
        printf("root2 is %.3f-i%.3f",real,imag);
    }
}