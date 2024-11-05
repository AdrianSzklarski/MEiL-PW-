#include <stdlib.h>
#include <stdio.h>

int main()
{
    float a, b, h, Vp, Vo;
    printf("Podaj wartości boków podstawy a i b:\n");
    scanf("%f %f", &a, &b); // Poprawiona linia
    printf("Podaj wartość wysokości h:\n");
    scanf("%f", &h);
    
    // Obliczenia objętości
    Vp = a * b * h; // Objętość prostopadłościanu
    Vo = Vp / 3.0;  // Objętość ostrosłupa
    
    // Wyświetlanie wyników
    printf("Objętość prostopadłościanu Vp = %f\n", Vp);
    printf("Objętość ostrosłupa Vo = %f\n", Vo);

    return 0;
}

//Sprawdzenie ujemnych wartości:
//Jeżeli wprowadzone wartości a, b lub h są ujemne, wynik również będzie ujemny. Możesz dodać dodatkowe sprawdzenie, 
//aby upewnić się, że wszystkie wartości są dodatnie:

//if (a <= 0 || b <= 0 || h <= 0) {
 //   printf("Wszystkie wartości muszą być dodatnie!\n");
 //   return 1; // Zakończenie programu z kodem błędu

//Dodaj tę część po wczytaniu wartości. To zapewni, że obliczenia będą tylko dla dodatnich wartości.
// -----

// Biblioteki:

// c
// Skopiuj kod
// #include <stdlib.h>
// #include <stdio.h>
// #include <stdlib.h>: Dołącza standardową bibliotekę, która zawiera funkcje do alokacji pamięci, generowania liczb losowych itp. (w tym przypadku nie jest używana).
// #include <stdio.h>: Dołącza standardową bibliotekę wejścia/wyjścia, która pozwala na korzystanie z funkcji takich jak printf i scanf.
// Funkcja main:

// c
// Skopiuj kod
// int main()
// To główny punkt wejścia do programu. Zwraca liczbę całkowitą (0 na koniec działania).
// Deklaracja zmiennych:

// c
// Skopiuj kod
// float a, b, h, Vp, Vo;
// Deklaruje zmienne typu float do przechowywania wartości boków podstawy (a, b), wysokości (h) oraz objętości prostopadłościanu (Vp) i ostrosłupa (Vo).
// Wczytanie boków podstawy:

// c
// Skopiuj kod
// printf("Podaj wartości boków podstawy a i b:\n");
// scanf("%f %f", &a, &b);
// printf wyświetla komunikat, prosząc użytkownika o podanie wartości boków.
// scanf wczytuje te wartości i zapisuje je w zmiennych a i b. %f oznacza, że wczytywane będą liczby zmiennoprzecinkowe.
// Wczytanie wysokości:

// c
// Skopiuj kod
// printf("Podaj wartość wysokości h:\n");
// scanf("%f", &h);
// Ponownie, printf prosi o wartość wysokości, a scanf zapisuje ją w zmiennej h.
// Obliczenie objętości prostopadłościanu:

// c
// Skopiuj kod
// Vp = a * b * h; // Objętość prostopadłościanu
// Oblicza objętość prostopadłościanu, mnożąc długości boków a, b i wysokość h. Wynik jest zapisany w zmiennej Vp.
// Obliczenie objętości ostrosłupa:

// c
// Skopiuj kod
// Vo = Vp / 3.0;  // Objętość ostrosłupa
// Oblicza objętość ostrosłupa, dzieląc objętość prostopadłościanu przez 3.0 (konwencjonalna formuła dla ostrosłupa o podstawie prostokątnej).
// Wyświetlenie wyników:

// c
// Skopiuj kod
// printf("Objętość prostopadłościanu Vp = %f\n", Vp);
// printf("Objętość ostrosłupa Vo = %f\n", Vo);
// printf wyświetla obliczone objętości. %f jest używane do formatowania liczb zmiennoprzecinkowych.
// Zakończenie programu:

// c
// Skopiuj kod
// return 0;
// Kończy funkcję main i zwraca 0, co oznacza, że program zakończył się pomyślnie.
// Dodatkowe uwagi:
// Jeśli chcesz dodać sprawdzenie, aby upewnić się, że wszystkie wprowadzone wartości są dodatnie, można to zrobić tuż po wczytaniu wartości. Na przykład:

// c
// Skopiuj kod
// if (a <= 0 || b <= 0 || h <= 0) {
//     printf("Wszystkie wartości muszą być dodatnie!\n");
//     return 1; // Zakończenie programu z kodem błędu
// }
// To zapewni, że obliczenia będą tylko dla dodatnich wartości.