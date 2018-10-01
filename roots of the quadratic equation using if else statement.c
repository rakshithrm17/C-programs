#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
    float x1,x2,a,b,c,disc;
    clrscr();
    printf("enter the coordinates a b c\n");
    scanf("%f%f%f",&a,&b,&c);
    disc=b*b-4*a*c;
    if(disc==0)
    {
          x1=x2=b/(2*a);
          
          printf("the roots are equal\n");
          printf("the roots are x1=%.2lf\nx2=%.2lf\n",x1,x2);
    }
    if(disc>0)
    {
             x1=(-b+sqrt(disc))/(2*a);
             x2=(-b-sqrt(disc))/(2*a);
             
             printf("the roots are distinct\n");
             printf("the roots are x1=%.2lf\nx2=%.2fl\n",x1,x2);
    }
    if(disc>0)
    {
       x1=b/(2*a);
       x2=sqrt(fabs(disc))/(2*a);
       
       printf("the roots are complex\n");
       printf("the roots are x1=%.2lf+i%.2lf\n",x1,x2");
       printf("the roots are x2=%.2lf-i%.2lfn",x1,x2);
    }
    getch();
}    
