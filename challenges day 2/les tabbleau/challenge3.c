#include <stdio.h>

int main() {
   int nomber,valeur,i,r=0;
   printf("nomber:  ");
   scanf("%d",&nomber);
   
   int mohammed[nomber];
   
        for(i = 0; i < nomber; i++){
             printf("valeur: ");
             scanf("%d",&valeur);
              mohammed[i]=valeur; 
        }
        for(i = 0; i < nomber; i++){
        r+=mohammed[i];
        }
         printf("%d\n", r);
       
    return 0;
}