#include<stdio.h>
#include<iostream>
using namespace std;

float sq(float check,int inp)
{
    if(check*check < inp)
    {
        check++;
        check =sq(check,inp);
    }
    else if(check*check > inp)
    {
        check--;
        return check;
    }
    return check;
}

float d1(float check,int inp)
{
    if(check*check < inp)
    {
        check+=0.1;
        check =d1(check,inp);
    }
    else if(check*check > inp)
    {
        check-=0.1;
        return check;
    }
    return check;
}

float d2(float check,int inp)
{
    if(check*check < inp)
    {
        check+=0.01;
        check =d2(check,inp);
    }
    else if(check*check > inp)
    {
        check-=0.01;
        return check;
    }
    return check;
}

float d3(float check,int inp)
{
    if(check*check < inp)
    {
        check+=0.001;
        check =d3(check,inp);
    }
    else if(check*check > inp)
    {
        check-=0.001;
        return check;
    }
    return check;
}

int main()
{
    double inp;
    cin >> inp;

    float check =1;
    float ans = sq(check,inp);
    float dec1 = d1(ans,inp);
    float dec2 = d2(dec1,inp);
    float dec3 = d3(dec2,inp);

    printf("Answer is : %.2f",dec3);
    
}