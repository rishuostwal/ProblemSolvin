#include <stdio.h>
#include <string.h>
 
void find_frequency(char [], int []);
 
int main()
{
   char string[100];
   int c, count[26] = {0};
 
   
   gets(string);
 
   find_frequency(string, count);
   
  
   
   for (c = 0 ; c < 26 ; c++)
   {
       
         if(count[c]!=0)
         printf("%c \t  %d\n", c + 'a', count[c]);
   }
   return 0;
}
 
void find_frequency(char s[], int count[]) {
   int c = 0;
   
   while (s[c] != '\0') {
      if (s[c] >= 'a' && s[c] <= 'z' )
         count[s[c]-'a']++;
      c++;
   }
}