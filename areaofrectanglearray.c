#include<stdio.h>

void input(float *l,float *b)
{
  printf("Enter the length and breadth:\n");
  scanf("%f %f",l,b);
}
  float compute(float l, float b,float *a)
{
  *a=l*b;
  return 0;
}
 void output(float a)
{
  printf("The area of the rectangle is %f",a);
}
int main()
{
  float l,b,a;
  input(&l,&b);
  compute(l,b,&a);
  output(a);
  return 0;
}
