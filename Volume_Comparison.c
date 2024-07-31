#include <stdio.h>
int main(void) {
    int a,b,c,x;
    scanf("%d%d%d%d",&a,&b,&c,&x);
    int volume_of_cuboid=a*b*c;
    int volume_of_cube=x*x*x;
    if(volume_of_cuboid>volume_of_cube){
        printf("Cuboid");
    }
    else if(volume_of_cube>volume_of_cuboid){
        printf("Cube");
    }
    else if(volume_of_cube==volume_of_cuboid){
        printf("Equal");
    }
}

