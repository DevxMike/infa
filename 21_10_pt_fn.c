#include <stdio.h>

//<typ_zwracany> nazwa_funkcji(<typ_1> argument_1, ..., <typ_n> argument_n); //deklaracja funkcji
//<typ_zwracany> nazwa_funkcji(<typ_1> argument_1, ..., <typ_n> argument_n){ //instrukcje } //definicja

double dodaj_dwa_argumenty(double argument1, double argument2){
    double wynik;

    wynik = argument1 + argument2;
    return wynik;
}
//jeśli tworzymy funkcję, której typ zwracany jest inny niż void
//to ta funkcja MUSI zawsze coś zwrócić
//jeśli typ zwracany funkcji jest typem void, nie musimy niczego zwracać
//aczkolwiek możemy zakończyć działanie funkcji poprzez instrukcję "return;"

void say_hello(){
    printf("Hello world\n");
    return;
    printf("A jednak to nie dziala\n");
}

double odejmij_dwa_argumenty(double a, double b); //deklaracja funkcji
//definicje funkcji można zrobić gdziekolwiek w kodzie
//POZA CIAŁAMI INNYCH FUNKCJI (deklarować też w nich nie wolno)

int main(void){
    //<typ_na_który_chcemy_wskazywać> * nazwa; //deklaracja
    //<typ_na_który_chcemy_wskazywać> * nazwa = &nazwa_zmiennej_typu_na_ktory_chcemy_wskazywac; //definicja
    //operator * oznacza że zmienna będzie zmienną wskaźnikową, operator & w tym wypadku (przed nazwą zmiennej)
    //pobiera adres tej zmiennej

    int zmienna = 5;
    int * wskaznik_do_zmiennej = &zmienna;

    printf("zmienna = %d\n", zmienna);
    printf("wskaznik_do_zmiennej = %p\n", wskaznik_do_zmiennej);

    //uzyskanie wartosci spod adresu, który przechowuje nasz wskaźnik odbywa się 
    //za pomocą operatora wyłuskania (inaczej dereferencji) czyli '*'
    //w następujący sposób: *wskaznik_do_zmiennej

    printf("*wskaznik_do_zmiennej = %d\n", *wskaznik_do_zmiennej);


    //można również uzyskać dostęp do zawartości zmiennej na którą wskazuje wskaźnik
    //w celu jej modyfikacji

    //*wskaznik = <nowa_wartosc_zmiennej>;
    *wskaznik_do_zmiennej = 10;

    printf("zmienna = %d\n", zmienna);

    printf("10 + 10 = %lf\n", dodaj_dwa_argumenty(zmienna, zmienna));

    printf("5 - 3 = %lf\n", odejmij_dwa_argumenty(5, 3));

    say_hello();

    int zmienna1;

    //operator pytajnik, inaczej "?:"
    //zmienną, wyrażenie, brak wyrażenia (tym trzecim lub drugim narazie się nie kłopotali to przyjdzie z czasem)
    //zmienna = wyrazenie? (wartość jeśli prawda) : (wartość jeśli fałsz);

    zmienna1 = (dodaj_dwa_argumenty(2, 2) == 4.1)? 10 : 5;

    printf("zmienna = %d\n", zmienna1);

    return 0;
}

double odejmij_dwa_argumenty(double a, double b){
    return a - b;
}