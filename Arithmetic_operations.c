#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int sum=a+b;
    int diff=a-b;
    int pro=a*b;
    int quo=a/b;
    int rem=a%b;
    printf("Sum:%d
",sum);
    printf("Difference:%d
",diff);
    printf("Product:%d
",pro);
    printf("Quotient:%d
",quo);
    printf("Remainder:%d
",rem);
}