#include<stdio.h>
int main()
{
int n;

scanf("%d",&n);
if(n>=1&&n<100000)
  printf("positive");

else if(n==0)
  printf("zero");
else
  printf("invalid");
return 0;
}
