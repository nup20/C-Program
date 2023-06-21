#include <stdio.h>
#include <stdlib.h>

int main()
{char a[50];
 char b[50];
    printf("string 1=");
    gets(a);
    printf("string 2=");
    gets(b);

strcat(a,b);
printf("After concatination the string is:%s",a);

    return 0;
}
