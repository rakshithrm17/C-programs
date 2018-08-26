#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,n,temp,a[30];
 clrscr();
 printf("enter thr numbers of elements:");
 scanf("%d",&n);
 printf("\nenter the elements \n");
 for i=0;i<n;i++
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<=n-1;i++)
 {
       temp=a[i];
       j=i-1;
 }
 a[j+1]=temp;
 }
 printf("\n sorted list is as follows\n");
 for(i=0;i<n;i++)
 {
  printf("%d\n",a[i]);
  }
  getch();
  }
