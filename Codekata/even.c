#include<stdio.h>
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
if(n>=1&&n<=1000000)
{
if(n%2==0)
  printf("EVEN");
else
  printf("ODD");
}
else 
  printf("INVALID");
return 0;
}
