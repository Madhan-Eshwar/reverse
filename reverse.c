#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  int n,a,sum=0;
  scanf("%d",&n);
  while(n!=0)
  {
    a=n%10;
    sum=(sum*10)+a;
    n=n/10;
  }
  printf("%d",sum);
  return 0;
}
