#include <stdlib.h>
#include <stdio.h>

int main()
{
    float a=5.5;
    printf("Zmienna a wynosi %f, a jej wartość w pamięci, to %x \n", a, &a);
    
    return 0;  // Dodano return 0 na końcu
}

//#include <stdlib.h>: Włącza standardową bibliotekę C, która zawiera funkcje do alokacji pamięci, konwersji i innych operacji.
// #include <stdio.h>: Włącza bibliotekę standard wejścia/wyjścia, która umożliwia korzystanie z funkcji takich jak printf.

//int main(): To punkt wejścia programu. Zwraca typ całkowity (int), 
//co oznacza, że program kończy się z wartością całkowitą (zwykle 0, co oznacza, że zakończył się bez błędów).

//float a=5.5;: Deklaruje zmienną a typu float (liczba zmiennoprzecinkowa) i przypisuje jej wartość 5.5.

//printf(...): Używa funkcji do wypisania tekstu na standardowe wyjście (zwykle konsolę).
//"Zmienna a wynosi %f, a jej wartość w pamięci, to %x \n": To formatowany ciąg, który określa, jak mają być wyświetlane zmienne.
//%f: Miejsce na zmienną typu float (czyli a).
//%x: Miejsce na wskaźnik (adres w pamięci) zmiennej a w formacie szesnastkowym.
//\n: Nowa linia.

//a: Przekazuje wartość zmiennej a do funkcji printf.
//&a: Przekazuje adres zmiennej a (operator & oznacza adres).

//return 0;: Zwraca wartość 0 do systemu operacyjnego, co oznacza, że program zakończył się pomyślnie.