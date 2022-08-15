#/include<stdio.h>
#include<stdlib.h>
int input()
{
  int a;
  printf("enter the number of elements:");
  scanf("%d",a);
  return a;
}
char inputstr(int a)
{
  char s[20];
 printf("enter the string:");
  for (int i=0;i<a;i++)
    {
      scanf("%s",s[i]);
      return s[i];
    }
}
char comapare(char s1[],char s2[],int a)
{ 
  char check='f';
  for(int i=0;i<a;i++)
    {
  if(s1[i]==s2[i])
  {
   check='t';
  }
      else 
  {
    check='f';
    exit(0);
  }
}
  return check;
  }
  void output(int check)
{
if(check=='t')
{
  printf("the strings are identical");
}
  else
{
  printf("the strings are non identical");
}
  }
void main()
{
  int check,a;
  a=input();
  char s1[20]=("Spandana");
  char s2[20]=("spandana");
  
  
  /*for(int i=0;i<n;i++)
    {
      s1[i]=inputsrt(s);
      s2[i]=inputsrt(s);
      }*/
  check=compare(s1,s2);
  output(check);
    
}
