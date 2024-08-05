#include <stdio.h>
int main(void) {
        int n;
        scanf("%d",&n);
        int arr[n],i;
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int ecount=0,ocount=0;
        for(i=0;i<n;i++){
            if(arr[i]%2==0){
                ecount++;
            }
            else{
                ocount++;
            }
        }
        if(ecount>ocount){
            printf("READY FOR BATTLE\n");
        }
        else{
            printf("NOT READY\n");
        }
}

