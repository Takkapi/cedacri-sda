#include <stdio.h>

int main() {
    int anual, credit_score;
    
    printf("Introduceti salariul anual si scorul de credit: ");
    scanf("%d %d", &anual, &credit_score);

    if(anual / 12 >= 20000 && credit_score >= 600) printf("Sunteti eligibil pentru un imprumut!\n");
    else printf("Ne pare rau, dar nu sunteti elibil pentru un imprumut!\n");

    return 0;
}