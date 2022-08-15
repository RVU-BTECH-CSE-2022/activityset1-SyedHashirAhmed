#include<stdio.h>
int input()
{
  int a;
  printf("Enter the length of the array");
  scanf("%d",&a);
}

int compute(int arr[],int a)
{
  int max;
  for(int i=0;i<=a;i++)
    {
      printf("Enter the elements of array");
      scanf("%d",&arr[i]);

      int max=0;
      if(arr[i]>max)
      {
        max=arr[i];
        
      }
      else
      {
        max=max+0;
      }
    }
  return max;
  }

int output(int max)
{
  printf("The largest number is %d",max);
}

int main()
{
  int max=0;
  int a=input();
  int arr[a];
  max=compute(arr,a);
  output(max);
  return max;
}

  

  

  