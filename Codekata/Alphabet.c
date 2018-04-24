#include<stdio.h>
#include<ctype.h>
int main()
{
char ch;
printf("Enter the letter:");
scanf("%c",&ch);
if(isalpha(ch))
{
  printf("ALPHABET");
}
 else
 {
   printf("NUMBER");
 }
   return 0;
   }
