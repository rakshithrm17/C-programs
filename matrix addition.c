#include<stdio.h>
#include<conio.h>
void main()
{
  int c,d,m,n,first[25][25],second[25]25],sum[25][25];
  clrscr();
  printf("\nenter the number of rows and coloumn:\n");
  scanf("%d %d",&m,&n);
  printf("\nenter the elements of first matrix:\n");
  for(c=0;c<m;c++)
    for(d=0;d<n;d++)
      scanf("%d",&second[c][d]);
  printf("\nenter the elements of second matrix:\n");
  for(c=0;c<m;c++)
    for(d=0;d<n;d++)
      scanf("%d",&second[c][d]);
  printf("\n the sum of entered matrices is:\n");
  for(c=0;c<m;c++)
  {
      for(d=0;d<n;d++)
      {
        sum[c][d]=first[c][d]+second[c][d]);
      }
      printf("\n");
   }
   getch();
}
