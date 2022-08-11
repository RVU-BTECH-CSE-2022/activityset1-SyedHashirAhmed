#include <stdio.h>

int input()
{ 
  int n;
  printf("Enter the size of the array");
  scanf("%d",&n);
  return n;
  }

int compute(int n,int arr[n])
{ 
  int sum=0;
  printf("Enter the elements in arrays");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
  
  for(int i=0;i<n;i++)
    {
      sum=sum+arr[i];
    }
   return sum;
  }

void output(int sum)
{
  printf("The sum of the arrays %d",sum);
  }

int main(void)
{ 
  int n=input();
  int arr[n];
  int sum = compute(n,arr);
  output(sum);
    return 0;
  }