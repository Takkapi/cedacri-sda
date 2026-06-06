#include <stdio.h>

int main() {
    int hours, costul;

    printf("Introdu cate ore a fost parcata masina: ");
    scanf("%d", &hours);

    if(hours <= 2) costul = hours * 50;
    else if(hours <= 5) costul = (2 * 50) + ((hours - 2) * 25);
    else costul = (2 * 50) + (3 * 25) + ((hours - 5) * 15);

    printf("Spre plata: %d pentru %d ore parcate.\n", costul, hours);
    
    return 0;
}