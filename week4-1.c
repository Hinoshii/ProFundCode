#include<stdio.h>
int main()
{
    int Arr[10];
    printf("Enter your Array member(10) : ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&Arr[i]);
    }

    int even=0;
    int odd=0;

    for(int i=0;i<10;i+=2)
    {
        odd+=Arr[i];
    }
    for(int i=1;i<10;i+=2)
    {
        even+=Arr[i];
    }

    printf("Result = %d",odd-even);
}