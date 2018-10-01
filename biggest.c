#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c;
   printf("enter the number of elements\n");
   scanf("%d%d%d",&a,&b,&c);
   if(a>b)
   {
     if(a>c)
            printf("\na is maximum");
       else
            printf("\c is maximum");
   }
   else
   {
     if(b>c)
            printf("\nb is maximum");
      else
            printf("\nc is maximum");
   }
   getch();
}   
