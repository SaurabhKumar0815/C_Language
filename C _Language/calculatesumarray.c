#include<stdio.h>
int main()
{
  int n, i;
  printf("enter a number\n");
  scanf("%d",&n);
  printf("Table is-----");
  for(i=1;i<=10;i++)
  {
    
    printf("%d%d%d\n",n,i,n*i);
    
  }
  return 0;
}