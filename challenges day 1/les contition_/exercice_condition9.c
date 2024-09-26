#include <stdio.h>

int main() {
   char t;
   printf("entre votre lettre: ");
   scanf("%c",&t);
   
    if('A' <=t && 'Z'>=t)
    printf("votre lettre majiscule");
   
    else if ('a'<=t && 'z'>=t)
    printf("votre lettre miniscule");
    
    else
    printf("autre chose");
    
    return 0;
}