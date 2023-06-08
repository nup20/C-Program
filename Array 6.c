#include <stdio.h>
#include <stdlib.h>

int main()
{char a[50],i;
int vowel=0,consonant=0;

    printf("Input the string:");
    gets(a);

    for(i=0;i<a[i]!='\0';i++)
     {
        if((a[i] == 'a')||(a[i] == 'e' )||(a[i] == 'i' )||(a[i] == 'o' )||( a[i] == 'u')||(a[i] == 'A')||(a[i] == 'E' )||(a[i] == 'I' )||(a[i] == 'O' )||( a[i] =='U'))
     {
     vowel=vowel+1;}



     else if ((a[i] >= 'a')&&(a[i] <= 'z')||(a[i] >= 'A')&&(a[i] <= 'Z'))
                {
                consonant=consonant+1;
                   }
     }

      printf("\nTotal number of vowel in the string is :%d\n",vowel);
      printf("Total number of consonant in the string is :%d",consonant);
    return 0;
}



