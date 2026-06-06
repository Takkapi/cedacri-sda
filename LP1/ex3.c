#include <stdio.h>

int main() {
    int pizza, pret;
    double costul;

    printf("Cate pizza doriti sa comandati? ");
    scanf("%d", &pizza);

    printf("Introduceti pretul pizzei: ");
    scanf("%d", &pret);

    costul = pizza * pret;
    printf("Costul total va fi %.2f MDL\n", costul > 750 ? costul - (costul * 0.15) : costul);
    
    return 0;
}