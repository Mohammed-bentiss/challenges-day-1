#include <stdio.h>

int main() {
    int n,i,f,r;
  
    int tableau[n];
    
    printf("entre le nomber des element: ");
    scanf("%d",&n);
    
        for(i=0; i<n; i++){
            printf("entre la valeur de chaque element:");
            scanf("%d",&tableau[i]);
        }
            
    printf("entre le facteur de multiplication: ");
    scanf("%d",&f);
      
        for(i=0; i<=tableau[n];i++){
        r=f*tableau[i];
         printf("%d\n",r);
            
        }
      
    return 0;
}