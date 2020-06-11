#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
  {

    string s=get_string("TEXT:");
      printf("Encrypted: ");

     for(int i=0, n=strlen(s) ; i<n ; i++)
      {
        if (s[i]>='a' && s[i]<='z')
         {
          printf("%c", s[i]+3);
         }

        else if(s[i]>='A' && s[i]<='Z')
         {
           printf("%c", s[i]+3)   ;
         }

     else{
          printf("%c", s[i]);
           }
      }
     printf("\n");
  }
