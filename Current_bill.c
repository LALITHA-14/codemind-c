#include<stdio.h>
int main()
{
    int units;
    scanf("%d",&units);
    float unitcost,tbill;
    if (units<=199)
    {
        (unitcost=1.20);
    }
    else if (units>=200 && units<400)
    {
        (unitcost=1.50);
    }
    else if (units>=400 && units<600)
    {
        (unitcost=1.80);
    }
    else if (units>=600)
    {
        (unitcost=2.00);
    }
    float bill=units*unitcost;
    if (bill>400)
    {
        (tbill=bill+(bill*0.15));
    }
    else 
    {
        (tbill=bill+100);
    }
printf("%.2f",tbill);
}