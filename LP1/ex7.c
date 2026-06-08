#include <stdio.h>

int main() {
    int secunde, minute, ore;

    printf("Dati un numar de secunde: ");
    scanf("%d", &secunde);

    ore = secunde / 3600;
    minute = (secunde % 3600) / 60;
    secunde = secunde % 60;

    printf("%d ore, %d minute, %d secunde\n", ore, minute, secunde);

    return 0;
}