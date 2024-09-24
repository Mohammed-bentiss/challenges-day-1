Challenge 5 : Affichage Température
Écrivez un programme qui demande la température en Celsius et affiche l'état de l'eau à cette température (solide, liquide, gaz). Règle :

C < 0 : Solide
0 <= C < 100 : Liquide
C >= 100 : Gaz


int main() {
    float C;
    printf("entre C :");
    scanf ("%f",&C);
    if (C < 0){
    printf ("solid");
    
    }else if(0 <= C && C < 100){
    printf("liquide");
    
    }else{
    printf("gaz");
    }
        

    return 0;
}