Challenge 4 : Conversion de la vitesse
Écrivez un programme qui demande la vitesse en kilomètres par heure (km/h) et la transforme en mètres par seconde (m/s). Formule :

m/s = km/h * 0.27778




#include <stdio.h>
int main() {
    float Kmh , ms;
    printf("Entre la vitesse en kilomètres par heure  : ");
    scanf("%f" , &Kmh);
    ms = Kmh * 0.27778;
    printf("la transforme en mètres par seconde : %.2f m/s", ms);
  return 0;
}