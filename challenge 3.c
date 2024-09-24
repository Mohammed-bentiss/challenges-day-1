Challenge 3 : Conversion de la distance
Écrivez un programme qui demande la distance en kilomètres et la transforme en yards. Formule :

Yards = Km * 1093.61






#include <stdio.h>

int main() {
    float Yards, Km;
    printf("Entre la distance en km : ");
    scanf("%f" ,&Km);
    Yards = Km * 1093.61;
    printf("la distance en yards : %.2f Y", Yards);

  return 0;
}