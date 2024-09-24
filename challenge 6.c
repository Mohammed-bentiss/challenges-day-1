Challenge 6 : Calcul et affichage des résultats
Deux nombres réels, a et b, sont saisis au clavier. Calculez et affichez a + b, a - b, a * b, et a / b avec précision décimale.


#include <stdio.h>
int main() {
    float a , b , addition , soustraction , multiplication,division ;
    printf ("entre a :");
    scanf("%f" ,&a);
    printf ("entre b :");
    scanf("%f" ,&b);
    
    addition = a+b;
    soustraction =a-b;
    multiplication =a*b;
    division =a/b;
    printf("addition : %.2f\n" ,addition );
  printf("soustraction : %.2f\n" ,soustraction );
  printf("multiplication : %.2f\n" ,multiplication);
  printf("division : %.2f\n" ,division);
    
    
  return 0;
}