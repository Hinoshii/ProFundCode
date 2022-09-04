#include<stdio.h>
int main()
{
    float Arr[10];
    printf("Enter Height(10) : ");
    for(int i=0;i<10;i++)
    {
        scanf("%f",&Arr[i]);
    } //Input

    float sum;
    for(int i=1;i<10;i++)
    {
        Arr[i]+=Arr[i-1];
    }

    printf("Sum of the Height is %.0f cm\n",Arr[9]);
    printf("Mean of the Height is %.2f cm",Arr[9]/10);

    return 0;
}