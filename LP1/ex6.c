#include <stdio.h>

int main() {
    float distanta, consum;

    printf("Introdu distanta parcursa (in km) si cantitatea de carburant consumata (in litri): ");
    scanf("%f %f", &distanta, &consum);

    printf("Consumul mediu de carburant per 100km este %.2f\n", (consum / distanta) * 100);

    return 0;
}