#include<stdio.h>

 int input()
{
  int a;
  printf("Enter the number");
  scanf("%d",&a);
  return a;
  }
 int compare(int a,int b,int c)
  {
  int f;
  if(a>b)
  {
     f=a;
    } 
if(b>c)
{
  f=b;  
}
 if(c>f)
 {
   f=c;
 }

  return f;
    }

 void output(f) 
{
  printf("The largest is %d",f);
}

int main(void)
{
 int a,b,c,f;
a=input();
b=input();
c=input();
f=compare(a,b,c);
output(f); 
}



  