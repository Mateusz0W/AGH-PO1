// To jest przykład instrukcji do ćwiczeń - kompletna instrukcja 
// zawsze będzie zawarta w tym miejscu, tj. w pliku main.cpp
//
// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal się
// a wynik jego dzialania byl taki sam jak podany na końcu tego pliku
//
// Implementacja klasy Dictionary może byc oparta o dowolną strukture danych (np. std::vector i std::pair).
// Klasa Dictionary nie może dziedziczyć z żadnej innej klasy.
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
// * archiwum powinno zawierać katalog z zadaniem lab01/
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


#include "Dictionary2.h"

using namespace std;


int main(int argc, char** argv) 
{
    Dictionary Dict;

    string key1 = "key1";
    string key2 = "key2";
    string key3 = "key3";
    
	Dict["key1"] = 1;
    Dict["key2"] = 2;
    Dict["key3"] = 3;
    
    cout << Dict["key1"] << " ";
    cout << Dict["key2"] << " ";
    cout << Dict["key3"] << " ";
    cout << endl;
    
    cout << Dict[key1] << " ";
    cout << Dict[key2] << " ";
    cout << Dict[key3] << " ";
    cout << endl;
    
	Dict.print();
    
    Dict["key2"] = 20;
    Dict["key4"] = 4;
	Dict.print();
    
    Dict.clear();
    Dict.print();

	return 0;
}

/** Wynik dzialania programu:
1 2 3
1 2 3
[key1,1] [key2,2] [key3,3]
[key1,1] [key2,20] [key3,3] [key4,4]
Empty Dictionary
*/
