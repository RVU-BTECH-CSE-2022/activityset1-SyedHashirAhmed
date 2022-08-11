#include<stdio.h>
#include<string.h>
int main()
{ 
  char str1[100];char str2[100];
  print("Enter two strings");
  gets(str1);
  gets(str2);

  for(int i=0;str1[i]==str2[i]&&str1[i]=='/0';i++)
    {
      if(str1[i]<str2[i])
      {
        printf("The str1 is less than str2");
      }

      else if(str1[i]>str2[i])
      {
        printf("The str2 is less than str1");
      }
      else
      {
        printf("str1 is equal to str2");
      }
          
    }
  return 0;
}

    


