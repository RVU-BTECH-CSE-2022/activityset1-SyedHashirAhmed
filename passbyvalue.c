#include<stdio.h>
int input()
{ 
  int *n;
  printf("Enter the size of the array");
  scanf("%d",n);
  return n;
  }
int sum1(int *sum,int n)
{
int i,arr[n];
for(i=0;i<n;i++)
  {
    scanf("%d",arr[i]);
  }

for(int i=0;i<n;i++)
  {
    *sum=sum+arr[i];
  }
return sum;
  }


void output(int sum)
{
  printf("The sum of n numbers",sum);
}

int main()
{
  int n=input();
  int sum=0;
  int sum1(sum,n)
  output();
  return 0;
}



  
