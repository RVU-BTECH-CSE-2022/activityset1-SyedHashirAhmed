#include<stdio.h>
int input()
{
int a;int b;int c;
printf("Enter three numbers")
scanf("%d,%d,%d",&a,&b,&c);
  }

int compare(int a,int b,int c)
{
int d;
if(a>b&&a>c)
{
  d=a;
}
else if(b>c)
{
  d=b;
}
else
{
  d=c;
}
return d;
}

int output void(int d)
{
  printf("The largest is %d",d);
}

int main()
{
  int a,b,c,d;
  a=input();
  b=input();
  c=input();
  d=compare(a,b,c);
  output(c);
  }
