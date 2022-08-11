#include<stdio.h>
int input()
{
  int a;
  printf("enter the number");
  scanf("%d",&a);
}
int compare(int a,int b)
{
  int c;
  if(a<b)
  {
    c=b;
  }
  else
  {
    c=a;
  }
  return c;
  }
void output(int c)
{
 printf("largest is %d",c);
}