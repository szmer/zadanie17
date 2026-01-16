#include <stdio.h>
#include <math.h>

u(double a, double b, double c) {
    return a * b * c;
}


double obliczObjetoscKuli(double r) {
    return (4.0 / 3.0) * M_PI * pow(r, 3);
}



int main() {
    int wybor;
    double a, b, c, r, wynik;

    printf("=== KALKULATOR OBJETOSCI BRYL ===\n");
    printf("Wybierz bryle, ktorej objetosc chcesz obliczyc:\n");
    printf("1. Prostopadloscian\n");
    printf("2. Kula\n");
    printf("Twoj wybor (wpisz 1 lub 2): ");


    if (scanf("%d", &wybor) != 1) {
        printf("Blad: To nie jest liczba!\n");
        return 1;
    }


    switch(wybor) {
        case 1: // Prostopad³oœcian
            printf("\n--- Wybrano: Prostopadloscian ---\n");
            printf("Podaj bok a: "); scanf("%lf", &a);
            printf("Podaj bok b: "); scanf("%lf", &b);
            printf("Podaj bok c: "); scanf("%lf", &c);

            if (a <= 0 || b <= 0 || c <= 0) {
                printf("Blad: Wymiary musza byc dodatnie!\n");
            } else {
                wynik = obliczObjetoscProstopadloscianu(a, b, c);
                printf("Objetosc prostopadloscianu wynosi: %.2lf\n", wynik);
            }
            break;

        case 2: // Kula
            printf("\n--- Wybrano: Kula ---\n");
            printf("Podaj promien r: "); scanf("%lf", &r);

            if (r <= 0) {
                printf("Blad: Promien musi byc dodatni!\n");
            } else {
                wynik = obliczObjetoscKuli(r);
                printf("Objetosc kuli wynosi: %.2lf\n", wynik);
            }
            break;

        default: // B³êdny wybór
            printf("\nBlad: Nieprawidlowy wybor menu! Uruchom program ponownie i wybierz 1 lub 2.\n");
            break;
    }

    return 0;
}
