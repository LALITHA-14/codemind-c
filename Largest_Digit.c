#include<stdio.h>
int main()
{
    int number,maxdigit=0;
    scanf("%d",&number);
    while(number>0)
    {
        int digit=number%10;
        if(digit>maxdigit)
        {
        maxdigit=digit;
    }
    number=number/10;
    }
    printf("%d
",maxdigit);
}