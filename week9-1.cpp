#include<stdio.h>
#include<iostream>
using namespace std;

double sq(int inp,double n)
{
    double n3=0;
    n3=(n+(inp/n))/2;
    return n3;
}

int main()
{
    int inp;
    cin >> inp;

    double n1=(inp+1)/2;
    double n2=sq(inp,sq(inp,sq(inp,n1)));

    printf("Answer is : %.2f",n2);
}