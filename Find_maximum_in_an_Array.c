#include <stdio.h>
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	int max=arr[0];
	for(i=1;i<n;i++)
	{
	    if(arr[i]>max){
	        max=arr[i];
	    }
	}
	printf("%d\n",max);
}
}



