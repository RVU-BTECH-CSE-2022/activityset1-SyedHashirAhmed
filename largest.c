
#include<stdio.h>
int input(int a)
{ 
  
  printf("Enter the number of elements");
  scanf("%d",&a);
  return a;
  }

int maximum(int a,int num[])
{
  for (int i=0;i<a;i++)
    {
      printf("enter the elements of the array:");
      scanf("%d",num[i]);
    }
  int max=0;
 for(int i=a;i>0;i--)
   {
     if(num[i]>num[max])
     {
       max=i;
     }
     
   }
  return max;
  }
int minimum(int a,int num[])
{
  for (int i=0;i<a;i++)
    {
      printf("enter the elements of the array:");
      scanf("%d",num[i]);
    }
  int min=0;
  for(int i=a;i>0;i--)
   {
     if(num[i]<num[min])
    {
       min=i;
     }
     
   }
  return min;
}
void output(int max,int min,int num[])
{
  printf("the largest number in the array is:%d",num[max]);
  printf("the smallest number in the array is:%d",num[min]);
  }
int main()
{
int a,num[20],max,min;
  input(a);
maximum(a,num);
minimum(a,num);
output(max,min,num);
  return 0;
}