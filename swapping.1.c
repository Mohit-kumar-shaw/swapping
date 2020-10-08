#include <stdio.h>
main()
{
  int a,b,swap=0; 
  printf("enter first number");
  scanf("%d",&a);
  printf("enter second number");
  scanf("%d",&b);
  swap=a;
  a=b;
  b=swap;
  printf("value after swapping");
  printf("value of A %d,a");
  printf("value of B %d,b");
  return 0;
  }
