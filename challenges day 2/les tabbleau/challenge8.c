// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int n,v;
   printf("entre la taille du tableau: ");
   scanf("%d",&n);
   int tab[n];
   
   for(int i=0; i<n; i++){
       printf("entre la valeur de chaque case: ");
       scanf("%d",&v);
       tab[i]=v;
   }
   for(int i=0; i<n; i++){
       printf("le tableau principal: %d\n",tab[i]);
   }
   printf("*******************************\n");
   int copier[n];
   for(int i=0; i<n; i++){
   copier[i]=tab[i];
   printf("le tableau copier :%d\n",tab[i]);}
   
   
  
    return 0;
}


