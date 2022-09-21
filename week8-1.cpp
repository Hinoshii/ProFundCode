#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    printf("Enter your square size : ");
    int i;
    scanf("%d",&i); //size square
    printf("Enter your number : \n");
    int a[i][i];
    for(int j=0;j<i;j++)
    {
        for(int k=0;k<i;k++)
        {
            scanf("%d",&a[j][k]);
        }
    }
    //input

    int Ans = i*((i*i)+1)/2;
    int check=1;
    int sum=0;
    
    for(int j=0;j<i;j++)
    {
        for(int k=0;k<i;k++)
        {
            sum += a[j][k];
        }

        if(sum!=Ans)
        {
            check=0;
            break; 
        }
        sum=0;
    }

    for(int j=0;j<i;j++)
    {
        for(int k=0;k<i;k++)
        {
            sum += a[k][j];
        }

        if(sum!=Ans)
        {
            check=0;
            break; 
        }
        sum=0;
    }

    for(int j=0;j<i;j++)
    {
        sum += a[j][j];
    }
    if(sum!=Ans) check=0;
    sum=0;

    for(int j=0;j<i;j++)
    {
        sum += a[j][i-j-1];
    }
    if(sum!=Ans) check=0; 
    sum=0;
    
    if(check == 0)
        printf("Not a Magic Square :((");
    if(check==1)
        printf("It is a Magic Square");
}