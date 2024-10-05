#include <stdio.h>
#include <string.h>
typedef struct {
    char prenom[50];
    char nom[50];
    char tel[15];
    int age;
    char statut[10];
    int referance;
    char date[10];
}dentaire;
dentaire reservations[100];
int nombre_de_reservation=0;

void ajouter(){

    int i ;
    i = nombre_de_reservation;
    
    printf("entre les information de client:\n");
    printf("entre le prenom: ");
    scanf("%s",reservations[i].prenom);
    printf("entre le nom: ");
    scanf("%s",reservations[i].nom);
    printf("entre le numero du telephone: ");
    scanf("%s",reservations[i].tel);
    printf("entre age: ");
    scanf("%d",&reservations[i].age);
    printf("entre le statut de reservation: ");
    scanf("%s",reservations[i].statut);
    printf("entre la date de reservation aaaa-mm-jj : ");
    scanf("%s",reservations[i].date);
    reservations[i].referance = nombre_de_reservation;
    nombre_de_reservation++;

    menu();
    
}

void modifier(){
    int ref;
    char prenom[50];
    char nom[50];
    char tel[15];
    int age;
    char statut[10];
    int referance;
    char date[10];
    printf("entre le refrance de votre reservation: ");
    scanf("%d",& ref);
    printf(" la referance %d \n",reservations[ref].referance);

    printf(" le prenom:%s \n ",reservations[ref].prenom);
    printf(" le nouveau prenom: ");
    scanf("%s",prenom);
    strcpy(reservations[ref].prenom,prenom);

    printf(" le nom:%s \n ",reservations[ref].nom);
    printf(" le nouveau nom: ");
    scanf("%s",nom);
    strcpy(reservations[ref].nom,nom);

    printf(" le numero du telephone:%s \n ",reservations[ref].tel);
    printf(" le nouveau tel: ");
    scanf("%s",tel);
    strcpy(reservations[ref].tel,tel);

    printf(" age:%d \n ",reservations[ref].age);
    printf(" le nouveau age: ");
    scanf("%d",&age);
    reservations[ref].age=age;

    printf(" le statut de reservation:%s \n ",reservations[ref].statut);
    printf(" le nouveau statut: ");
    scanf("%s",statut);
    strcpy(reservations[ref].statut,statut);

    printf(" la date de reservation:%s \n",reservations[ref].date);
    printf(" le nouveau date: ");
    scanf("%s",date);
    strcpy(reservations[ref].date,date);

    menu();

}


void afichage(){
    
    int i;
    for( i=0; i<nombre_de_reservation; i++){
        printf(" la referance%d \n",reservations[i].referance);
        printf(" le prenom:%s \n ",reservations[i].prenom);
        printf(" le nom:%s \n ",reservations[i].nom);
        printf(" le numero du telephone:%s \n ",reservations[i].tel);
        printf(" age:%d \n ",reservations[i].age);
        printf(" le statut de reservation:%s \n ",reservations[i].statut);
        printf(" la date de reservation:%s \n",reservations[i].date);
    }
    menu();
    
}


void recherche(){
    int chois, ref,i;
    char nom_rechercher[50];
    char noom[50];
    printf("enter 1 pour chechercher par referance: \n entre 2 pour recherche par nom : ");
    scanf("%d",&chois);

    switch (chois){
        case 1:
        printf("entre la referance:");
        scanf("%d",&ref);

        printf(" la referance%d \n",reservations[ref].referance);
        printf(" le prenom:%s \n ",reservations[ref].prenom);
        printf(" le nom:%s \n ",reservations[ref].nom);
        printf(" le numero du telephone:%s \n ",reservations[ref].tel);
        printf(" age:%d \n ",reservations[ref].age);
        printf(" le statut de reservation:%s \n ",reservations[ref].statut);
        printf(" la date de reservation:%s \n",reservations[ref].date);

        break;
        case 2:
        printf("entre le nom:");
        scanf("%s",nom_rechercher);
        for(i=0; i<nombre_de_reservation; i++){
            
            strcpy (noom , reservations[i].nom);
            if(noom==nom_rechercher){
                ref = reservations[i].referance;
            }

        }
        printf(" la referance%d \n",reservations[ref].referance);
        printf(" le prenom:%s \n ",reservations[ref].prenom);
        printf(" le nom:%s \n ",reservations[ref].nom);
        printf(" le numero du telephone:%s \n ",reservations[ref].tel);
        printf(" age:%d \n ",reservations[ref].age);
        printf(" le statut de reservation:%s \n ",reservations[ref].statut);
        printf(" la date de reservation:%s \n",reservations[ref].date);
        break;

        
    }


    menu();
    
}



void menu (){
    int chois;
    do{
        printf("1: ajoute     .\n");
        printf("2: modifier   .\n");
        printf("3: supprimer  .\n");
        printf("4: afichier   .\n");
        printf("5: tri        .\n");
        printf("6: rechercher .\n");
        printf("7: statistuque.\n");
        printf("8: quitte     .\n");
        printf("entre votre chois:");
        scanf("%d",&chois);

    switch (chois){
        // fonction menu ajouter
        case 1:ajouter();
        break;
        // fonction de menu modifier
        case 2: modifier();
        break;
        // fonction de menu suprimmer
        case 3: printf("supprimer\n");
        break;
        // fonction de menu afichier
        case 4: afichage();
        break;
        // fonction de menu trier
        case 5: printf("tri\n");
        break;
        // fonction de menu rechercher
        case 6: recherche();
        break;
        // fonction de menu statistique
        case 7: printf("statistuque\n");
        break;
    }
    }while (chois != 8);
}


void initialise(){
    reservations[0].referance = 0;
    strcpy(reservations[0].prenom , "Mohammed0");
    strcpy(reservations[0].nom , "BENTISS");
    strcpy(reservations[0].tel , "0720091710");
    reservations[0].age = 22;
    strcpy(reservations[0].statut , "valider");
    strcpy(reservations[0].date , "2024-06-30");

    reservations[1].referance = 1;
    strcpy(reservations[1].prenom , "Mohammed1");
    strcpy(reservations[1].nom , "BENTISS");
    strcpy(reservations[1].tel , "0720091710");
    reservations[1].age = 22;
    strcpy(reservations[1].statut , "valider");
    strcpy(reservations[1].date , "2024-06-30");

    reservations[2].referance = 2;
    strcpy(reservations[2].prenom , "Mohammed2");
    strcpy(reservations[2].nom , "BENTISS");
    strcpy(reservations[2].tel , "0720091710");
    reservations[2].age = 22;
    strcpy(reservations[2].statut , "valider");
    strcpy(reservations[2].date , "2024-06-30");

    reservations[3].referance = 3;
    strcpy(reservations[3].prenom , "Mohammed3");
    strcpy(reservations[3].nom , "BENTISS");
    strcpy(reservations[3].tel , "0720091710");
    reservations[3].age = 22;
    strcpy(reservations[3].statut , "valider");
    strcpy(reservations[3].date , "2024-06-30");

    reservations[4].referance = 4;
    strcpy(reservations[4].prenom , "Mohammed4");
    strcpy(reservations[4].nom , "BENTISS");
    strcpy(reservations[4].tel , "0720091710");
    reservations[4].age = 22;
    strcpy(reservations[4].statut , "valider");
    strcpy(reservations[4].date , "2024-06-30");

    reservations[5].referance = 5;
    strcpy(reservations[5].prenom , "Mohammed5");
    strcpy(reservations[5].nom , "BENTISS");
    strcpy(reservations[5].tel , "0720091710");
    reservations[5].age = 22;
    strcpy(reservations[5].statut , "valider");
    strcpy(reservations[5].date , "2024-06-30");

    reservations[6].referance = 6;
    strcpy(reservations[6].prenom , "Mohammed6");
    strcpy(reservations[6].nom , "BENTISS");
    strcpy(reservations[6].tel , "0720091710");
    reservations[6].age = 22;
    strcpy(reservations[6].statut , "valider");
    strcpy(reservations[6].date , "2024-06-30");

    reservations[7].referance = 7;
    strcpy(reservations[7].prenom , "Mohammed7");
    strcpy(reservations[7].nom , "BENTISS");
    strcpy(reservations[7].tel , "0720091710");
    reservations[7].age = 22;
    strcpy(reservations[7].statut , "valider");
    strcpy(reservations[7].date , "2024-06-30");

    reservations[8].referance = 8;
    strcpy(reservations[8].prenom , "Mohammed8");
    strcpy(reservations[8].nom , "BENTISS");
    strcpy(reservations[8].tel , "0720091710");
    reservations[8].age = 22;
    strcpy(reservations[8].statut , "valider");
    strcpy(reservations[8].date , "2024-06-30");

    reservations[9].referance = 9;
    strcpy(reservations[9].prenom , "Mohammed9");
    strcpy(reservations[9].nom , "BENTISS");
    strcpy(reservations[9].tel , "0720091710");
    reservations[9].age = 22;
    strcpy(reservations[9].statut , "valider");
    strcpy(reservations[9].date , "2024-06-30");

    nombre_de_reservation =10;
   
    
}
int main(){
    initialise();
    menu();
     return 0;
}