#include <stdio.h>

int main() {
    int n, f, i;
    f = 1;
    printf("entre un number : ");
    scanf("%d",&n);
    

for(i = 1;i<=n;i++){
    f = f * i;
    
    
}
printf("%d",f);


    return 0;
}