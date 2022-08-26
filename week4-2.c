#include<stdio.h>
int main()
{
    int Arr[10];
    printf("Enter your Array member(10) : ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&Arr[i]);
    }

    int even[5];
    int odd[5];
    int o=0;
    int e=0;
    int od=0;
    int ev=0;

    for(int i=0;i<10;i++)
    {
        if(i%2==1)
        {
            even[e]=Arr[i];
            e++;
        }

        else if(i%2==0)
        {
            odd[o]=Arr[i];
            o++;
        }
    }

    for(int i=0;i<5;i++)
    {
        ev+=even[i];
    }
    for(int i=0;i<5;i++)
    {
        od+=odd[i];
    }

    printf("Result = %d",od-ev);
}