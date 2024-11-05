#include <stdlib.h>
#include <stdio.h>

int main(void) 
{
    printf("Hello World\n\n"); // dodany znak nowej linii
    printf("Hello\n"); // dodany znak nowej linii
    printf("World!\n"); // poprawiony błąd w cudzysłowie
    return 0; // dodany return
}

// Nagłówki: #include <stdlib.h> i #include <stdio.h> to dyrektywy preprocesora, które włączają biblioteki standardowe. stdlib.h 
// zawiera funkcje do zarządzania pamięcią i konwersji, a stdio.h oferuje funkcje do obsługi wejścia/wyjścia, takie jak printf.


// return 0; oznacza, że program zakończył się sukcesem. Wartość 0 jest standardowym sygnałem, że program działał bez błędów.