#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    printf("Podaj a b: ");
    
    if (scanf("%lf %lf", &a, &b) != 2) {
        fprintf(stderr, "Błąd przy odczycie danych.\n");
        return 1;  // Zwróć błąd, jeśli odczyt się nie powiódł
    }

    c = a + b;
    printf("Suma 2ch liczb: %6.2lf\n", c);
    
    return 0;  // Zwróć 0 na końcu
}

// Nagłówki (#include):
// #include <stdlib.h>: Dodaje funkcje do zarządzania pamięcią oraz konwersji danych.
// #include <stdio.h>: Umożliwia korzystanie z funkcji do wejścia/wyjścia, takich jak printf i scanf.
// #include <math.h>: (nie jest używane w tym kodzie, ale można je dodać, jeśli planujesz używać funkcji matematycznych).

// Funkcja main:
// int main(): Jest to punkt startowy programu. Funkcja main zawsze musi być obecna w programie w języku C.

// Deklaracja zmiennych:
// double a, b, c;: Tworzy trzy zmienne typu double, które mogą przechowywać liczby zmiennoprzecinkowe. a i b 
// będą przechowywać liczby wprowadzone przez użytkownika, a c będzie przechowywać ich sumę.

// Wyświetlenie komunikatu:
// printf("Podaj a b: ");: Funkcja printf wyświetla komunikat na ekranie, zachęcając użytkownika do wprowadzenia dwóch liczb.

// Wczytanie danych:

// scanf("%lf %lf", &a, &b);: Funkcja scanf służy do wczytywania danych od użytkownika.
// "%lf %lf": Format specyfikatora, który oznacza, że spodziewamy się dwóch liczb typu double.
//&a i &b: Adresy zmiennych a i b, do których zostaną zapisane wprowadzone wartości. Operator & oznacza, że przekazujemy adres zmiennej, a nie jej wartość.

// Obliczenie sumy:
// c = a + b;: Dodaje wartości zmiennych a i b i przypisuje wynik do zmiennej c.

// Wyświetlenie wyniku:

// printf("Suma 2ch liczb: %6.2lf\n", c);: Wyświetla wynik na ekranie.
// "%6.2lf": Format specyfikatora, który oznacza, że wynik zostanie wyświetlony jako liczba zmiennoprzecinkowa z 2
// miejscami po przecinku, a cała liczba ma mieć co najmniej 6 znaków (jeśli to możliwe, reszta będzie wypełniona spacjami).

// Zakończenie programu:
// return 0;: Zwraca 0, co oznacza, że program zakończył się poprawnie. To jest dobra praktyka, aby 
// jasno zasygnalizować, że program zakończył działanie bez błędów.



Twój kod wygląda dobrze, ale jeśli napotykasz na błąd "Segmentation fault", może to być spowodowane problemem z wejściem z scanf. Oto kilka sugestii, które mogą pomóc:

Sprawdzenie wyniku scanf: Upewnij się, że scanf poprawnie odczytuje wartości. Możesz to zrobić, sprawdzając, czy liczba odczytanych wartości jest zgodna z oczekiwaną.

Dodanie #include <errno.h>: To może pomóc w wykrywaniu błędów związanych z odczytem.