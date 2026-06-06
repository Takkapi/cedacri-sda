#include <stdio.h>

int main() {
    int salariu;
    
    printf("Dati salariul anual in MDL: ");
    scanf("%d", &salariu);

    // Pentru calcularea impozitului vom declara o variabila de tip int cu numele impozit,
    // si va fi initalizata in dependenta de salariu * impozit folosind 'in-line if'
    int impozit = (salariu <= 200000 ? salariu * 0 : 
        (salariu > 200000 && salariu <= 350000 ? salariu * 0.1f : salariu * 0.15f));
    printf("Din salariul de %d MDL se vor impozita %.2f MDL\n", salariu, impozit);

    return 0;
}