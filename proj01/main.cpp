// To jest przykład instrukcji do ćwiczeń - kompletna instrukcja 
// zawsze będzie zawarta w tym miejscu, tj. w pliku main.cpp
//
// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal się
// a wynik jego dzialania byl taki sam jak podany na końcu tego pliku
//
// Uwaga: nie należy powielać kodu z klasy bazowej w klasach pochodnych, tylko wykorzystać pracę wykonywaną przez metody klasy bazowej 
// w metodach klas pochodnych (także w odniesieniu do konstruktorów).
// Generalnie należy unikać duplikacji jakiegokolwiek kodu.
// Poziomy dostepu do skladnikow klas powinny byc dobrane zgodnie z zasadami programowania obiektowego (hermetyzacja/ekapsulacja)  
// Staraj się nie powielać tego samego kodu w różnych miejscach. 
// Kazda klasa powinna byc zdefiniowana w oddzielnym pliku h (deklaracje funkcji, klas i metod, ewentualnie takze definicje jesli klasa szablonowa) i cpp (definicje).
//
//
// Pliku main.cpp, nie wolno modyfikowac.
//
// Ostateczny program powinien byc przyjazny dla programisty
// (miec czytelny i dobrze napisany kod)
//
// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani żadnych innych materialow (w tym własnych wczesniej
// przygotowanych plikow oprócz makefile, chyba że polecenie stanowi inaczej)
//
//
// Kody źródłowe muszą znajdować się w katalogu do którego nikt oprócz
// właściciela nie ma praw dostępu.
// Rozwiazanie (czyli dodane pliki i main.cpp należy wgrać do UPEL 
// jako archiwum tar.gz o strukturze takiej jak w zadaniu na UPeL.
// UWAGA:
// * archiwum powinno zawierać katalog z zadaniem projNN/ (gdzie NN to nr projektu np. proj01)
// * katalog z zadaniem powinien zawierać podkatalog include/
//   w którym muszą znajdować się wszystkie niezbędne pliki nagłówkowe
// * katalog z zadaniem powinien zawierać podkatalog src/
//   w którym muszą znajdować się wszystkie niezbędne pliki z kodem źródłowym
// * katalog z zadaniem powinien zawierać podkatalog build/ 
//   w którym powinien znajdować się tylko i wyłącznie plik Makefile
// * tworzenie archiwum: tar -czvf nazwa.tar.gz zad/
//   np. tar -czvf lab01.tar.gz lab01/
// * rozpakowanie archiwum: tar -xvf nazwa.tar
// * wszystkie funkcje w plikach *.h powinny być okomentowane - przykład prawidłowej dokumentacji funkcji:
//
// /** @brief Wyszukanie elementu w liscie.
// *
// * Funkcja przeszukuje liste w celu znalezienia podanego elementu.
// *
// * @param[in] list  wskaznik do listy
// * @param[in] c  wartosc szukanego elementu
// * @return wskaznik do pierwszego elementu listy o wartosci c jesli taki element jest w liscie \n
// * NULL jesli lista nie posiada elementu o wartosci c
// */
// slistEl* find(slist* list, char c);




#include <iostream>
#include "Product.h"
#include "Shop.h"

using namespace std;


int main(int argc, char** argv) 
{
	Product e1(1, 5);
	cout << e1;
	cout << e1[0] << endl;
	cout << e1[1] << endl;
	cout << e1++;
	cout << e1;
	cout << ++e1;
	cout << e1;
	cout << endl;
	
	cout << e1;
	cout << e1--;
	cout << e1;
	cout << --e1;
	cout << e1;
	cout << endl;

	e1 = e1 + 10;
	cout << e1;
	e1 = e1 - 15;
	cout << e1;
	e1--;
	--e1;
	cout << e1;
	e1 = e1 - 7;
	cout << e1;
	cout << endl;
	
	e1 = e1 + 4;	
	cout << e1;
	e1 = e1 * 2;	
	cout << e1;
	cout << endl;
 		
	Product e2(2, 3);
	Product e3(3, 17);
	Product e4(4, 9);
	Product e5(5, 1);
	Product e6(6, 12);
	Product e7(7, 12);
	
	cout << (e2 < e3) << endl;
	cout << (e3 < e2) << endl;
	cout << (e2 > e3) << endl;
	cout << (e3 > e2) << endl;
	cout << (e2 <= e3) << endl;
	cout << (e3 <= e2) << endl;
	cout << (e2 >= e3) << endl;
	cout << (e3 >= e2) << endl;
	cout << (e6 <= e7) << endl;
	cout << (e7 <= e6) << endl;
	cout << (e6 >= e7) << endl;
	cout << (e7 >= e6) << endl;
	cout << (e6 == e7) << endl;
	cout << (e7 != e6) << endl;
	cout << (e2 == e3) << endl;
	cout << (e3 != e2) << endl;

	
	cout << "============================================" << endl;

	// Obiekt oparty o dowolną strukturę danych 
	Shop S1;
	cout << S1;
	S1.Remove();
	S1.Add(e2);
	S1.Add(e3);
	cout << S1;
	cout << endl;
	
	cout << S1[1];
	cout << S1[0];
	cout << endl;

	S1[0] = e6;
	cout << S1;
	S1.Remove();
	cout << S1;
	S1.Add(e4);
	cout << S1;
	cout << endl;

	S1 = S1 - 10;
	cout << S1;
	S1 = S1 + 6;
	cout << S1;
	S1 = S1 * 3;
	cout << S1;
	cout << endl;
	
	Shop S2(S1);
	Shop S3 = S1;
	Shop S4;
	S4 = S1;
	S1.Clear();
	S1.Add(e4);
	S1.Add(e5);
	cout << S1;
	cout << S2;
	cout << S3;
	cout << S4;

	S1.Add(e1);
	S1.Add(e2);
	S1.Add(e3);
	cout << S1;
	// operator () zwraca nowy sklep z towarami i, i+1, ..., j 
	Shop S5 = S1(1,3);
	cout << S5;

	
	// porownujemy sume ilosci sztuk wszystkich towarow w sklepach
	cout << (S1 < S2) << endl;
	cout << (S2 < S1) << endl;
	cout << (S1 > S2) << endl;
	cout << (S2 > S1) << endl;
	cout << (S3 <= S4) << endl;
	cout << (S4 <= S3) << endl;
	cout << (S3 >= S4) << endl;
	cout << (S4 >= S3) << endl;
	cout << (S3 == S4) << endl;
	cout << (S4 != S3) << endl;
	
	cout << "============================================" << endl;


	return 0;
}

/** Wynik dzialania programu:
typ: 1, ilosc sztuk: 5
1
5
typ: 1, ilosc sztuk: 5
typ: 1, ilosc sztuk: 6
typ: 1, ilosc sztuk: 7
typ: 1, ilosc sztuk: 7

typ: 1, ilosc sztuk: 7
typ: 1, ilosc sztuk: 7
typ: 1, ilosc sztuk: 6
typ: 1, ilosc sztuk: 5
typ: 1, ilosc sztuk: 5

typ: 1, ilosc sztuk: 15
typ: 1, ilosc sztuk: 0
typ: 1, ilosc sztuk: 0
typ: 1, ilosc sztuk: 0

typ: 1, ilosc sztuk: 4
typ: 1, ilosc sztuk: 8

1
0
0
1
1
0
0
1
1
1
1
1
1
0
0
1
============================================
---
# Zawartosc/sklad:
---
BLAD: Pusto !
---
# Zawartosc/sklad:
typ: 2, ilosc sztuk: 3
typ: 3, ilosc sztuk: 17
---

typ: 3, ilosc sztuk: 17
typ: 2, ilosc sztuk: 3

---
# Zawartosc/sklad:
typ: 6, ilosc sztuk: 12
typ: 3, ilosc sztuk: 17
---
---
# Zawartosc/sklad:
typ: 6, ilosc sztuk: 12
---
---
# Zawartosc/sklad:
typ: 6, ilosc sztuk: 12
typ: 4, ilosc sztuk: 9
---

---
# Zawartosc/sklad:
typ: 6, ilosc sztuk: 2
typ: 4, ilosc sztuk: 0
---
---
# Zawartosc/sklad:
typ: 6, ilosc sztuk: 8
typ: 4, ilosc sztuk: 6
---
---
# Zawartosc/sklad:
typ: 6, ilosc sztuk: 24
typ: 4, ilosc sztuk: 18
---

---
# Zawartosc/sklad:
typ: 4, ilosc sztuk: 9
typ: 5, ilosc sztuk: 1
---
---
# Zawartosc/sklad:
typ: 6, ilosc sztuk: 24
typ: 4, ilosc sztuk: 18
---
---
# Zawartosc/sklad:
typ: 6, ilosc sztuk: 24
typ: 4, ilosc sztuk: 18
---
---
# Zawartosc/sklad:
typ: 6, ilosc sztuk: 24
typ: 4, ilosc sztuk: 18
---
---
# Zawartosc/sklad:
typ: 4, ilosc sztuk: 9
typ: 5, ilosc sztuk: 1
typ: 1, ilosc sztuk: 8
typ: 2, ilosc sztuk: 3
typ: 3, ilosc sztuk: 17
---
---
# Zawartosc/sklad:
typ: 5, ilosc sztuk: 1
typ: 1, ilosc sztuk: 8
typ: 2, ilosc sztuk: 3
---
1
0
0
1
1
1
1
1
1
0
============================================
*/
