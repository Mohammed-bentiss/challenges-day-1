#include <stdio.h>

int main() {
   int n,i,min;
    printf("entre la taille de tableau: ");
    scanf("%d",&n);
   int tableau [n];
   for(i=0; i<n; i++ ){
       printf("entre la valeur: ");
       scanf("%d",&tableau [i]);
   }
   min=tableau[0];
   for(i=0; i<n; i++){
       if(tableau[i]<min){
       min=tableau[i];}
   }
   printf("%d",min);
   
    return 0;
}