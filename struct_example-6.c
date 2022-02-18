#include <stdio.h>
#include <stdlib.h>

struct ogrenci
{
    char ad[20];
    char soyad[20];
    int no;

};


int main()
{
    struct ogrenci ogr[100];
    printf("Ogrencinin Adi:\n");
    scanf("%s",ogr[0].ad);
    printf("Ogrencinin Soyadi:\n");
    scanf("%s",ogr[0].soyad);
    printf("Ogrencinin Numarasi:\n");
    scanf("%d",&ogr[0].no);

    printf("Ogrencinin Adi:%s\n",ogr[0].ad);
    printf("Ogrencinin Soyadi:%s\n",ogr[0].soyad);
    printf("Ogrencinin Numarasi:%d\n",ogr[0].no);

    return 0;
}
