#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
if(n>=1&&n<=1000000)
{
if(n%2==0)
  printf("Even");
else
  printf("Odd");
}
else 
  printf("Invalid");
return 0;
}
