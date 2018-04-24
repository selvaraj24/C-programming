#include<stdio.h>
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
if(n>=1&&n<100000)
  printf("POSITIVE");

else if(n==0)
  printf("ZERO");
else
  printf("INVALID");
return 0;
}
