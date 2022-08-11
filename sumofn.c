#include<stdio.h>
int input()
{
int n;
printf("Enter the number");
scanf("%d",&n);
return n;
}

int sum=0;
{
for(int i=1;i<=n;i++)
  {
    sum=sum+i;
  }
}
int output(int sum)
{
  printf("The sum of n numbers is %d",sum);
}

int main()
{
  int n,sum;
  n=input();
  output(sum);
  
}