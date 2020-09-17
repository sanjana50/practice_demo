#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j;
  clrscr();
  for(i=1;i<=10;i++)
  {
  for(j=0;j<=9;j++)
  {
    printf("%d \t",j*10+i);
  }
  printf("\n");
  }
  getch();
}
