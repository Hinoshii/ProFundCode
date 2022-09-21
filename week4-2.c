#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    printf("Enter your Array member(10) : ");
    scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

    int od = a+c+e+g+i;
    int ev = b+d+f+h+j;

    printf("Result = %d",od-ev);
}
