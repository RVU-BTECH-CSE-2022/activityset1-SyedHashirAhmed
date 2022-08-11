
#include <stdio.h>

void input(int n, int a[n])
{
  for(int i=0; i<n; i++) {
    printf("Enter %d element",i);
    scanf("%d",&a[i]);
  }
}

/*
void input(int *aa)
{
  printf("Enter a number");
  *aa = 5;
  // scanf("%d",aa);
}

*/

int main()
{
  int a[10];
  input(10,a);
//   input(&a);
  printf("the value of a is %d\n",a[0]);
  return 0;
  }
  
  
  
  
  




  


