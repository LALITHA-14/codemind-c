#include <stdio.h>
int main(void) {
   char str[101];
   scanf("%[^\n]%s",str);
   printf("%c",str[6]);
}

