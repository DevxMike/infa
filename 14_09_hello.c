#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    char zmienna_znakowa;
    unsigned char zmienna_znakowa_bez_znaku;
    int calkowita;
    unsigned bez_znaku;
    long dluga_calkowita;
    unsigned long dluga_calkowita_bez_znaku;
    float zmienno_przecinkowa;
    double zmienno_przecinkowa_podwojnej_precyzji;


    printf("minimalna wartosc char: %d, max wartosc char: %d\n", CHAR_MIN, CHAR_MAX);
    printf("minimalna wartosc unsigned char: %d, max wartosc unsigned char: %d\n", 0, UCHAR_MAX);
    printf("minimalna wartosc int: %d, max wartosc int: %d\n", INT_MIN, INT_MAX);
    printf("minimalna wartosc unsigned: %u, max wartosc unsigned: %u\n", 0, UINT_MAX);
    printf("minimalna wartosc long: %ld, max wartosc long: %ld\n", LONG_MIN, LONG_MAX);
    printf("minimalna wartosc u long: %d, max wartosc u long: %lu\n", 0, ULONG_MAX);
    printf("minimalna wartosc float: %f, max wartosc float: %f\n", FLT_MIN, FLT_MAX);
    printf("minimalna wartosc dobule: %lf, max wartosc double: %lf\n", DBL_MIN, DBL_MAX);

    return 0;
}