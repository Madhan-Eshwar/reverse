#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char a[10];
  scanf("%s",a);
  int n,i;
  n=strlen(a);
  
  for(i=n;i>=0;i--)
  {
    printf("%c",a[i]);
  }
  
  return 0;
}
