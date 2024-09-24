Challenge 2 : Conversion de la température
Écrivez un programme qui demande la température en Celsius et la transforme en Kelvin. Formule :

K = C + 273.15



#include <stdio.h>

int main() {

    float T, K;
    printf("Entre T: "  );
    scanf("%f", &T);
    K = T + 273.15;
    printf("la température en Kelvin : %.2f K",K);

 return 0;

}
