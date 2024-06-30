#include<stdio.h>
int main(){
  int t;
scanf("%d",&t);
while(t--){
int x,y,z;
scanf("%d%d%d",&x,&y,&z);
int a=(x*5)+(10*y);
printf("%d\n",a/z);
}
}
