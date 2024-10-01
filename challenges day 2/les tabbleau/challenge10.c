// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int n,v,r;
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
   printf(" Entrez l element a rechercher: ");
   scanf("%d", &r);
   int i= 0 ;
   while(i<n && r != tab[i]){
       i++ ;}
       
       if(i < n){
           printf("le element se trouve dand la position %d",i+1);}
           
           else{
               printf("element non trouve");}
           
   
   
  
    return 0;
}