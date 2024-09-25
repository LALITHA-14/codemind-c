#include<stdio.h>
int main(){
       int n,i=1;
       scanf("%d",&n);
       unsigned long long factorial = 1;
       if(num<0){
              printf("Factorial is not defined for negative numbers\n");
       }
      else{
         do{
            factorial*=i;
            i++;
         } while(i<=n);
     printf("Factorial of %d = %llu\n", n, factorial);
     }
}
