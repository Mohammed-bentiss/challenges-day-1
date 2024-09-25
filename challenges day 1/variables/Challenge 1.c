
                                       ******mohammed bentiss******


hallenge 1 : Affichage Informations
Écrivez un programme en C qui va permettre d'afficher vos informations personnelles : nom, prénom, âge, sexe, et adresse email. Les données sont saisies à partir du clavier.



#include <stdio.h>

int main() {
    char nom[50];
    char prenom[50];
    int age;
    char sexe;
    char email[100];
    
    printf("Entrez votre nom : ");
    scanf("%s", nom);

    printf("Entrez votre prénom : ");
    scanf("%s", prenom);

    printf("Entrez votre âge : ");
    scanf("%d", &age);

    printf("Entrez votre sexe (M/F) : ");
    scanf(" %c", &sexe);  //

    printf("Entrez votre adresse email : ");
    scanf("%s", email);

    printf("\nVos informations personnelles :\n");
    printf("Nom : %s\n", nom);
    printf("Prénom : %s\n", prenom);
    printf("Âge : %d\n", age);
    printf("Sexe : %c\n", sexe);
    printf("Email : %s\n", email);

    return 0;