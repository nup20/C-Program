#include <stdio.h>
#include <stdlib.h>


int main()
{int n,i,e[10];

printf("Input the no of array to store in the array:");
scanf("%d",&n);
printf("Input %d number of Element in the array:\n",n);


for(i=0;i<n;i++)
{
    printf("element-%d:",i);
    scanf("%d",&e[i]);
}
if(e[0]==e[2])
{
printf("The unique element found in the array are:%d",e[1]);}

if(e[0]==e[1])
{
printf("The unique element found in the array are:%d",e[2]);}

if(e[1]==e[2])
{
printf("The unique element found in the array are:%d",e[0]);}

return 0;
}




