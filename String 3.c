#include <stdio.h>
#include <stdlib.h>

int main()
{char a[50],i=0;
    printf("Input the strings are=");
    scanf("%s",&a);
    printf("String characters are:");
    for(i=0;i<a[i]!='\0';i++)
    {
        printf("%c ",a[i]);
    }

    return 0;
}
