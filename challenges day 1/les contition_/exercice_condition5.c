#include <stdio.h>

int main() {
    // a=année;m=mois;j=jour;h=hueres;=mt=minut;s=soconde
    int a,m,j,h,mt,s,n;
    printf("entre votre nomber des anneés: ");
    scanf("%d",&a);
    printf("1-mois\n2-jours\n3-hueres\n4-minuts\n5-soconde\n entre votre chois: ");
    scanf ("%d",&n);
    m=a*12;
    j=a*365;
    h=a*8760;
    mt=a*514020;
    s=a*30841200;
    switch (n) {
        case 1:
        printf("dans ce annee: %d",m);
        break;
        case 2:
        printf("dans ce annee: %d",j);
        break;
        case 3:
        printf("dans ce annee: %d",h);
        break;
        case 4:
        printf("dans ce annee: %d",mt);
        break;
        case 5:
        printf("dans ce annee: %d",s);
        break;
    }