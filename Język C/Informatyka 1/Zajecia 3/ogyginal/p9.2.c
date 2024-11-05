#include <stdlib.h>
#include <stdio.h>

int main(void) 
{
    double a;
    int b;
    a = 5.1;
    b = 34;
    printf("%4.21f \n", a);
    printf("%d \n", b);

    return 0; 
}

// Te linie są dyrektywami preprocesora, które włączają odpowiednie biblioteki:
// stdlib.h – zawiera deklaracje funkcji do zarządzania pamięcią, konwersji typów, itp. (w tym przypadku nie jest używana, ale często jest włączana w programach).
// stdio.h – zawiera funkcje do wejścia/wyjścia, takie jak printf.

// Definiuje główną funkcję programu, która jest punktem wejścia. int oznacza, że funkcja zwraca wartość całkowitą.

// Tutaj deklarujemy dwie zmienne:
// a typu double (liczba zmiennoprzecinkowa, może przechowywać liczby z miejscami po przecinku).
// b typu int (liczba całkowita).

// Przypisujemy wartość 5.1 do zmiennej a oraz 34 do zmiennej b.
//
// "%4.21f" – format specyfikator, który oznacza:
// 4 – minimalna szerokość pola (ale ponieważ liczba jest zmiennoprzecinkowa, może być szersza).
// .21 – liczba miejsc po przecinku (wyświetli 21 miejsc po przecinku).
// f – oznacza, że jest to liczba zmiennoprzecinkowa.
//

// To wywołanie wyświetla wartość zmiennej b:
// "%d" – format specyfikator dla liczb całkowitych.


