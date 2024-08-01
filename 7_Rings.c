#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);
        if(n*x>=10000 && n*x<=99999)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
