#include <stdio.h>
#include <stdlib.h>

int main()
{char a[50],i=0;
    printf("Input the strings are=");
    scanf("%s",&a);
    strrev(a);
    printf("\nString characters of the string in reverse are:%s",a);

    return 0;
}
