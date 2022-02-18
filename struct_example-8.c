#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char mahalle[15];
    char cadde[15];
    char sokak[15];

}Adress;

struct ogrenci
{
    char ad[20];
    char soyad[20];
    int no;
    Adress adres;

};

int main()
{
    struct ogrenci ogr1;

    strcpy(ogr1.ad,"Kadir");
    strcpy(ogr1.soyad,"Oruc");
    ogr1.no=58;
    strcpy(ogr1.adres.mahalle,"A mah.");
    strcpy(ogr1.adres.cadde,"B cad.");
    strcpy(ogr1.adres.sokak,"C sk.");

    printf("%s %s %d %s %s %s",

           ogr1.ad,
           ogr1.soyad,
           ogr1.no,
           ogr1.adres.mahalle,
           ogr1.adres.cadde,
           ogr1.adres.sokak


           );


    return 0;
}
