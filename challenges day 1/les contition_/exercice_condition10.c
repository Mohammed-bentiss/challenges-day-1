#include <stdio.h>

int main() {
   int j,m,a;
          printf("entre le jour: ");
    scanf("%d",&j);
   printf("entre le mois: ");
    scanf("%d",&m);

       printf("entre l'année: ");
    scanf("%d",&a);
    switch (m){
        case 1:
        printf("%d/janvier/%d",j,a);
        break;
        case 2:
        printf("%d/fivrier/%d",j,a);
        break;
        case 3:
        printf("%d/mars/%d",j,a);
        break;
        case 4:
        printf("%d/avril/%d",j,a);
        break;
        case 5:
        printf("%d/mai/%d",j,a);
        break;
        case 6:
        printf("%d/juin/%d",j,a);
        break;
        case 7:
        printf("%d/juillet/%d",j,a);
        break;
        case 8:
        printf("%d/août/%d",j,a);
        break;
        case 9:
        printf("%d/septembre/%d",j,a);
        break;
        case 10:
        printf("%d/octobre/%d",j,a);
        break;
        case 11:
        printf("%d/november/%d",j,a);
        break;
        case 12:
        printf("%d/decomber/%d",j,a);
        break;
    }
    
    return 0;
}