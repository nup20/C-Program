#include <stdio.h>
#include <stdlib.h>

int main()
{char a[50],i;
int word=0;

    printf("Input the string:");
    gets(a);

    for(i=0;i<a[i]!='\0';i++)
     {
         if(a[i]==' ')
     word=word+1;
     }
      printf("Total number of words in the string is :%d",word+1);
    return 0;
}
