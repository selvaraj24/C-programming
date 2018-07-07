#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,n=0,t,rem;
    scanf("%d",&a);
    t=a;
    if(a<=1000)
    {
        while(a>0)
        {
            rem=a%10;
            b=b*10+rem;
            a=a/10;
        }
        if(t==b)
        {
            printf("yes");
        
        }
        else
        {
            printf("No");
        }
    }
    
    return 0;
}
