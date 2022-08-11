#include<stdio.h>
int input()
{
int a;
printf("Enter the numbers");
scanf("%d",&a);

return a;
  }
int compare(int a,int b,int c)
{
  if(a>b<c)||(c>a<b)
   printf("The largest number %d",&b);
   if(c<a)
     printf("The largest number %d",&c);
}



int main(void)
{
 int a,b,c;
a=input();
b=input();
c=input();
output(); 
}

