#include <stdio.h>
#include <stdlib.h>

int main()
{int n,i,e[10];

    printf("Input the number of Array to store in the array :");
    scanf("%d",&n);
    printf("Input %d number of Element in the Array:\n",n);

    for(i=0;i<n;i++)
    {
        printf("Element-%d:",i);
        scanf("%d",&e[i]);
    }
    printf("The Value store in the Array are:");
    for(i=0;i<n;i++)
    {
       printf("%d",e[i]);
    }
    printf("\nThe value store into array  in the Reverse  are:");
    for(i=n;i>e[n];i--)
    {
      printf("%d",e[i]);
    }

    printf("\n");
return 0;
}
