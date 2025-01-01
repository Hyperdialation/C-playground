#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,real,imag,r1,r2,d;
    printf("Enter the values of coefficient a,b,c in a single line with space in between\n");
    scanf("%f%f%f",&a,&b,&c);
    d=((b*b)-(4*a*c));
    if (d==0)
    {
        printf("The roots are real and equal\n");
        r1=r2=(-b)/(2*a);
        printf("the root is %.3f\n",r1);
    }
    else if (d>0)
    {
        printf("The roots are real and distinct\n");
        r1=(((-b)+sqrt(d))/2*a);
        r2=(((-b)-sqrt(d))/2*a);
        printf("r1=%.3f and r2=%.3f\n",r1,r2);
    }
    else
    {
        printf("The roots are reral and imaginary\n");
        real=(-b)/(2*a);
        imag=(sqrt(fabs((d)))/(2*a));
        printf("Root 1 is %.3f+i%.3f\n",real,imag);
        printf("Root 1 is %.3f-i%.3f\n",real,imag);
    }

}