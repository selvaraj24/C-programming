#include<stdio.h>
int main()
{
char ch;
printf("Enter the letter:");
scanf("%c",&ch);
if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
{
  printf("The given letter is VOWEL");
}
 else
 {
   printf("The given letter  is consonant");
 }
   return 0;
  }
