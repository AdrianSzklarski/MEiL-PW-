#include <stdlib.h>
#include <stdio.h>

int main()
{
int i,j,k;
float a,b,c;

a=5.5;
i =a;  // niejawna konwersja
j=(int)a; // jawna konwersja
// w powyżzych trzech liniach nastąpi utrata danych, a=5

k=3;
b=k; // niejawna konwersja
c=(float)k; // jawna konwersja
// w powyższych trzech liniach nie nastąpi utrata danych, b=3

printf("a=%f, i=%d, j=%d, k=%d, b=%f, c=%f, \n", a, i, j, k, b, c);

return 0; 
}


//Jawna i niejawna konwersja dotyczą sposobu zmiany jednego typu danych na inny w programowaniu.

//Niejawna konwersja (automatyczna)
//Definicja: Jest to konwersja, która zachodzi automatycznie, bez potrzeby pisania dodatkowego kodu przez programistę.
//Przykład: Kiedy przypisujesz wartość typu zmiennoprzecinkowego (np. float) do zmiennej typu całkowitego (np. int):
//c
//float a = 5.5;
//int i = a;  // a zostaje automatycznie skonwertowane do 5
//W tym przypadku kompilator konwertuje a do int, ale część ułamkowa zostaje utracona.

//Jawna konwersja (ręczna)
//Definicja: Jest to konwersja, którą programista inicjuje w kodzie, zazwyczaj używając operatora rzutowania.
//Przykład: Użycie rzutowania, aby zmienić typ zmiennej:

//float a = 5.5;
//int j = (int)a;  // programista ręcznie konwertuje a do typu int
//Tutaj programista wyraźnie wskazuje, że chce przekonwertować a na typ int.
//Kluczowe różnice

//Inicjacja:
//Niejawna: automatyczna, nie wymaga interwencji.
//Jawna: wymaga wyraźnego wskazania przez programistę.

//Bezpieczeństwo:
//Niejawna: może prowadzić do utraty danych (np. ułamków).
//Jawna: daje programiście kontrolę, ale też może prowadzić do błędów, jeśli nie jest użyta ostrożnie.

//Czytelność:
//Niejawna: mniej kodu, ale mniej jasne, co się dzieje.
//Jawna: zwiększa przejrzystość, ale wymaga dodatkowych znaków.
// --------------------------------------------------------------

//#include <stdlib.h>: Włącza standardową bibliotekę, która zawiera funkcje do zarządzania pamięcią, konwersji liczb itp.
//#include <stdio.h>: Włącza standardową bibliotekę wejścia/wyjścia, która umożliwia korzystanie z funkcji takich jak printf.

// int main() Rozpoczyna definicję funkcji main, od której zaczyna się wykonywanie programu.

// int i, j, k;
//float a, b, c;
//Deklaruje trzy zmienne całkowite (i, j, k) oraz trzy zmienne zmiennoprzecinkowe (a, b, c).

//a = 5.5;
//Zmienna a jest przypisywana wartość 5.5, czyli liczba zmiennoprzecinkowa.

//i = a;  // niejawna konwersja
//i przyjmuje wartość a (5.5). To jest niejawna konwersja, ponieważ kompilator automatycznie zamienia wartość zmiennoprzecinkową 
//na całkowitą. Wartość i będzie wynosić 5, a reszta (0.5) zostanie utracona.

//j = (int)a; // jawna konwersja
//j przyjmuje wartość a, ale tu wykonujemy jawną konwersję, czyli programista wskazuje, że chce przekonwertować a na typ int. Wynik
// będzie taki sam jak w przypadku i, czyli j = 5.

//Kolejne zmienne
//k = 3;
//Zmienna k przyjmuje wartość 3.
//b = k; // niejawna konwersja
//b przyjmuje wartość k. To jest również niejawna konwersja, ale ponieważ 3 jest liczbą całkowitą, konwersja na float nie powoduje utraty danych. 
//Wartość b będzie wynosić 3.0.
//c = (float)k; // jawna konwersja
//Tutaj wykonujemy jawną konwersję k na float, co daje c = 3.0. Podobnie jak wcześniej, nie ma utraty danych.

// Wyjście
//printf("a=%f, i=%d, j=%d, k=%d, b=%f, c=%f, \n", a, i, j, k, b, c);
//Funkcja printf służy do wyświetlania wartości zmiennych. %f jest formatem dla zmiennoprzecinkowych, a %d dla liczb całkowitych. 
//Wyjście z tej linii będzie wyglądać mniej więcej tak:
//a=5.500000, i=5, j=5, k=3, b=3.000000, c=3.000000,

//Zakończenie
//return 0; 
//Zwraca 0, co oznacza, że program zakończył się pomyślnie.

//Podsumowanie
//Kod demonstruje różne rodzaje konwersji typów w C (niejawne i jawne) oraz pokazuje, jak różne typy zmiennych mogą być używane 
//i jak mogą wpływać na wartość wynikową.