#include <stdio.h>
#include <stdlib.h>
/*
top 2
1) pre-define
2) user define- function

1) call by value  ->4

a) no return no arg {  void  / () }
b) no return but args { void  /(int a,float b,double c.....)
c) return but no args { void -> int float... and ()}
d) return and args { void  /(int a,float b,double c.....)
*/





void sum()
{
    int a,b,c;
    printf("Enter any 2 number");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("result = %d\n",c);

}

void sum1(int x,int y)
{
    int a,b,c;
    printf("Enter any 2 number");
    scanf("%d%d",&a,&b);
    c=a+b+x+y;
    printf("result = %d\n",c);

}

int sum2()
{
    int a,b,c;
    printf("Enter any 2 number");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("result = %d\n",c);
   return c+3;
}


int sum3(int x,int y)
{
    int a,b,c;
    printf("Enter any 2 number");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("result = %d\n",c);

    return x+y;

}

int main()
{
int s;
  sum();
  sum1(5,1);
  s= sum2();
  printf("%d\n\n",s);

  s= sum3(2,8);
  printf("Sum =%d",s);

    return 0;
}
