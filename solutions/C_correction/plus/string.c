#include <stdio.h>


int strcmp1(char*s1, char*s2) {
  int i;
  for (i = 0;  s1[i] ==s2[i]; i++) 
   {
    if (s1[i] == '\0')  {
      return 0;
     }

   }
   return s1[i] - s2[i];
  }


int strcmp2(char*s1, char*s2) 
{   for ( ; *s1 == *   s2; s1++, s2++) {
          if (*s1 == '\0') {
             return 0;
           }
    }
    return*s1 - *s2;
}

int  main  (void)  {
char *str1   ="aa"; 
char  *str2  ="bbbbbbbbbbbbaaaa";
 printf("%d %d \n", strcmp1(str1,str2) , strcmp2(str1,str2)     ); 

}

