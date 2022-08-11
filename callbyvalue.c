#include <stdio.h>
  int main()
{
  int n;
  int arr[]={21,13,22,24,25,27,28,30,29,40};
  int sum=0;

  int length=sizeof(arr)/sizeof(arr[0]);      

  for(int i=0;i<length;i++)
    {
      sum=sum+arr[i];
    }
  printf("The sum of the arrays %d",sum);
  return 0;
  }