#include<stdio.h>

int input()
{
  int s;
printf("Enter the value of side");
scanf("%d",&s);
  return s;
  
}
int main()
{
  
 int area,s;
  s=input();
  area=s*s;
printf("The area of square is %d",area);
return area;
  }


