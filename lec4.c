#include <stdio.h>

int main(void)
{
  int a,b,n,i,fib;
  for(n=1;n<=10;n++){
    switch(n){
      case 1:
        fib=1;
        printf("%d ",fib);
        break;
      case 2:
        fib=1;
        printf("%d ",fib);
        break;
      default:
        a=1,b=1;
        for(i=3;i<=n;i++){
          fib=a+b;
          a=b;
          b=fib;
          }
          printf("%d ",fib);
          }
        }
}
