#include<stdio.h>
int input()
{ 
  int a,num[20];
  printf("Enter the number of elements");
  scanf("%d",&a);
  return a;
  printf("enter the elements of the array:");
  for(int i=0;i<a;i++)
    {
      scanf("%d",num[i]);
      return num[i];
    }
}

int maximum(int a,int num[] )
{
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
void main()
{
int a,num[20],min,max;
intput();
maximum(a,num[]);
minimum(a,num[]);
output(max,min,num[])
return 0;
}



  


  
