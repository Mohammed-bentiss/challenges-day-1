#include <stdio.h>

int main() {
    int taille;
    printf("entre la taille de tablaux: ");
    scanf("%d",&taille);
    
    int tab [taille];
    int n;
    
    for(int i=0; i<taille; i++){
        printf("entre  les nombre:  ");
        scanf("%d",&n);
    tab[i]=n;
    }
    
    for(int i=0; i<taille; i++)
    {printf("%d\n",tab[i]);}
   
    
    int max = tab [taille];
    for(int i=0; i<n; i++){
        if(tab[i] > max){
            max = tab[i]; 
        }
    }
    printf(" le plus nomber grand: %d\n",max);
        
    
    
    
    
    
    
    
    
    return 0;
}