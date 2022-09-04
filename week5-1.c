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
    for(int i=0;i<10;i++)
    {
        sum+=Arr[i];
    }

    printf("Sum of the Height is %.0f cm\n",sum);
    printf("Mean of the Height is %.2f cm",sum/10);

    return 0;
}