#include <stdio.h>
#include <stdlib.h>


int main()
{int n,e[10],i,sum=0;
    printf("Input The number o element to be stored in the array:");
    scanf("%d",&n);
    printf("Input %d Element in the array\n",n);

    for(i=0;i<n;i++)
    {
        printf("Element-%d:",i);
        scanf("%d",&e[i]);
    }
    for(i=0;i<n;i++)//c
    {
    sum+=e[i];
    }
    printf("Sum of all elements stored in the array is:%d",sum);

    return 0;
}
