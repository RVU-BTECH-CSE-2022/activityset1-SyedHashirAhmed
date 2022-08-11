#include<stdio.h>

  int main(char sc[])
  {
    char chr='*';
    for(int i=1;i<5;i++)
      {
        for(int j=1;j<=i;j++)
          {
            printf("%c",chr);
          }
        printf("\n");
      }
    for(int i=5;i>=1;i--)
      {
        for(int j=i;j>=1;j--)
          {
            printf("%c",chr);
          }
        printf("\n");
      }
    
  }
/*for(int i=5;i>=0;i--)
  {
   printf("\n ")
  }*/
  