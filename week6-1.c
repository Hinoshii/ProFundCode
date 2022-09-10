#include <stdio.h>
int main()
{
    printf("Enter your Number : ");
    int inp;
    scanf("%d",&inp);
    //input

    int k=inp;
    int ans=1;
    while(inp>=1)
    {
        ans*=inp;
        inp--;
    }

    printf("%d! = %d",k,ans);

    return 0;
}