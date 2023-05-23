#include <stdio.h>
#include <stdlib.h>

int main()
{int ele[10],i=0;
    printf("Input 10 Element in the Array:\n");

    for(i=0;i<10;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&ele[i]);

    }
    printf("\nElements in array are: ");
    for(i=0;i<10;i++)
    {
        printf("%d",ele[i]);
    }
    printf("\n");
    return 0;
}
