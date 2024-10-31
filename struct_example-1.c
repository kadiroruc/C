#include <stdio.h>
#include <stdlib.h>

struct ogrenci
{
    char ad[20];
    char soyad[20];
    int no;

};
//struct ın ismi ogrencidir.

int main()
{
    struct ogrenci ogr1;
    printf("Ogrencinin Adi:\n");
    scanf("%s",ogr1.ad);
    printf("Ogrencinin Soyadi:\n");
    scanf("%s",ogr1.soyad);
    printf("Ogrencinin Numarasi:\n");
    scanf("%d",&ogr1.no);

    printf("Ogrencinin Adi:%s\n",ogr1.ad);
    printf("Ogrencinin Soyadi:%s\n",ogr1.soyad);
    printf("Ogrencinin Numarasi:%d\n",ogr1.no);

    return 0;
}
