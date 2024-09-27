#include <stdio.h>

int main() {
    int a,b;
    printf("entre un nomber: ");
    scanf("%d",&b);
    for(a=0;a<=10;a++){
        printf("%d x %d = %d\n",a,b,a*b);
    }
    return 0;
}
