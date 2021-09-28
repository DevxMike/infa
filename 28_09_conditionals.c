#include <stdio.h>

int main(void){
    int czas = 5;

    //if(czas > 5){
    //    printf("Jeszcze nie trzeba wyjsc z domu\n");
    //}
    //else{
    //   printf("Trzeba wyjsc z domu\n");
    //}

    /*
    if(wyrażenie){ //jeśli wyrażenie jest prawdziwe
        //instrukcje
    }
    else{ //jeśli wyrażenie nie było prawdziwe
        //instrukcje
    }  
    */

    /*if(czas > 5){
        printf("Jeszcze nie trzeba wyjsc z domu\n");
    }
    else if(czas < 3){
        printf("Nie trzeba wyjsc z domu, czekamy na kolejny autobus\n");
    }
    else {
        printf("Trzeba wyjsc z domu\n"); 
    }*/

    /*
    if(wyrażenie1){ //jeśli wyrażenie1 jest prawdziwe
        //instrukcje
    }
    else if(wyrażenie2){ //jeśli wyrażenie1 NIE jest prawdziwe i wyrażenie2 jest prawdziwe
        //instrukcje
    }
    else{ //jeśli żadne z wyrażeń nie jest prawdziwe
        //instrukcje
    }
    */

    int x = 2;
    int potega = 10;
    int mnoznik = 2;

    for(int i = 1; i < potega; ++i){
        x = x * mnoznik;    
    }
    
    /*
    for(wyr1; wyr2; wyr3){
        //instrukcje    
    }
    */

    /*while(czas > 5){
        printf("Jeszcze jest czas, jeszcze %d minut\n", czas);
        --czas;
    }*/

    /*
    while(wyrażenie){ //jeśli wyrażenie jest prawdziwe, wykonaj blok instrukcji
        //instrukcje
    }
    */

    /*do{
        printf("czas mniejszy niz 5, pozostalo czasu: %d minut\n", czas);
    }
    while(czas < 5);*/

    /*
    do{ //wykonaj
        //instrukcje
    }
    while(wyrażenie); //sprawdź wyrażenie
    */

    /*switch(czas){ //sposób 1
        case 1:
        printf("Trzeba wyjsc z domu, zostala 1 minuta\n"); 
        break;
        
        case 2:
        printf("Trzeba wyjsc z domu, 2 min\n"); 
        break;

        case 3:
        printf("Trzeba wyjsc z domu, 3 min\n"); 
        break;

        case 4:
        printf("Trzeba wyjsc z domu, 4 min\n"); 
        break;

        case 5:
        printf("Trzeba wyjsc z domu, 5 min\n"); 
        break;

        default:
        printf("Nie trzeba wyjsc z domu\n"); 
        break;
    }*/

    /*switch(czas){ //sposób 2
        case 1: 
        case 2:
        case 3:
        case 4:
        case 5:
        printf("Trzeba wyjsc z domu, zostalo %d minut\n", czas);
        break;

        default:
        printf("Nie trzeba wyjsc z domu\n"); 
        break;
    }*/

    /*switch(zmienna){ //dopasuj zmienną
        case 1: //jeśli zmienna równa jest 1
            //instrukcje
        break;
        
        case 2: //jeśli zmienna równa jest 2
            //instrukcje
        break;

        default: //jeśli nie ma dopasowania
            //instrukcje 
        break;
    }*/

    //operatory mnożenia *, dzielenia /, modulo %, dodawanie +, odejmowanie -
    //operatory logiczne ==, !=, !

    
    if(czas % 2 == 1){
        printf("Liczba %d jest nieparzysta\n", czas);
    }
    else if(czas % 2 == 0){
        printf("Liczba %d jest parzysta\n", czas);
    }

    if(czas == 10){
        printf("czas == 10\n");
    }
    else{
        printf("czas != 10\n");
    }

    if(czas != 5){
        printf("czas != 5\n");
    }
    else{
        printf("czas == 5\n");
    }

    if(!(czas == 10)){ 
        printf("!(czas == 10)\n");
    }

    /*printf("czas == %d\n", czas);

    if(czas = 0){
        printf("czas == %d\n", czas);
    }
    else{
        printf("Wyrazenie przeksztalcone na false\n");
    }

    printf("czas == %d\n", czas);*/


    //operatory && AND, || OR

    int zmienna1 = 2, zmienna2 = 3;

    if(zmienna1 == 2 && zmienna2 == 3){
        printf("warunek1 prawdziwy\n");
    }
    else{
        printf("warunek1 nie jest prawdziwy\n");
    }


    if(zmienna1 == 2 || zmienna2 == 3){
        printf("warunek2 prawdziwy\n");
    }
    else{
        printf("warunek2 nie jest prawdziwy\n");
    }

    //inkrementacja ++, dekrementacja --

    int i = 1;
    printf("i++ == %d\n", i++);
    printf("i == %d\n", i);

    printf("++i == %d\n", ++i);

    return 0;
}