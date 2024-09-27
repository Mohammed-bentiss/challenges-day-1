#include <stdio.h>

int main() {
          int index,nomber;
          printf("entre nomber: ");
          scanf("%d",&nomber);
          int tableau [nomber];
   
        for(index=0; index<nomber ; index++){
            printf("entre le nomber: ");
            scanf("%d",&tableau[index]);
        }


    return 0;
}