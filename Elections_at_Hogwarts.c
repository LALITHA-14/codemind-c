#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if (x>50 && y<=101 && z<=101)
    {
        printf("Gryffindor");
    }
    else if (x<=101 && y>50 && z<=101)
    {
        printf("Slytherin");
    }
    else if (x<=101 && y<=101 && z>50)
    {
        printf("Hufflepuff");
    }
    else 
    {
        printf("NOTA");
    }
}