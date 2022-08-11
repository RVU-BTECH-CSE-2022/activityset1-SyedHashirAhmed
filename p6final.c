#include<stdio.h>
#include<stdlib.h>
int input()
{
  int n;
  printf("enter the length of the string:");
  scanf("%d",&n);
  return n;
  
}
char inputstr(char s[])
{
  
  printf("enter the string:");
    {
  scanf("%s",s);
      }
}
int compare(char s1[],char s2[],int n)
{
  for(int i=0;i<=n;i++)
  {
  if((s1[i]>s2[i])&(s1[i]&s2[i]>0))
  {
    printf("the lagrest string is %s:",s1);
    exit(0);
  }
    else
  {
    printf("the lagrest string is %s:",s2);
    exit(0);
    }
    }
  }
int main()
{
  int n;
  n=input();
  char s1[20],s2[20];
  inputstr(s1);
  inputstr(s2);
  compare(s1,s2,n);
}