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

    int row[i];
    int col[i];
    int diag1,diag2;

    int sum=0;
    for(int j=0;j<i;j++)
    {
        for(int k=0;k<i;k++)
        {
            sum += a[j][k];
        }
        row[j]=sum;
        sum=0;
    }

    for(int j=0;j<i;j++)
    {
        for(int k=0;k<i;k++)
        {
            sum += a[k][j];
        }
        col[j]=sum;
        sum=0;
    }

    for(int j=0;j<i;j++)
    {
        sum += a[j][j];
    }
    diag1=sum;
    sum=0;

    for(int j=0;j<i;j++)
    {
        sum += a[j][i-j-1];
    }
    diag2=sum;
    sum=0;

    int check=0; //ถ้าเท่าหมด = จตุรัสกล
    for(int j=0;j<i+1;j++)
    {
        if(row[j]==row[j+1])check++;
    }

    for(int j=0;j<i+1;j++)
    {
        if(row[i-1]==col[j])
        {
            if(col[j]==col[j+1])check++;
        }
    }
    if(diag1==diag2 && diag2==col[i-1]) check++;

    if(check == i+i-1)
        printf("It is a Magic Square");
    else
        printf("Not a Magic Square :((");
}