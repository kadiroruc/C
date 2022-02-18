#include <stdio.h>
#include <stdlib.h>

struct ogrenci
{
    char ad[20];
    char soyad[20];
    int no;

}ogr1;

void ogrenci_bilgileri(struct ogrenci ogr)
{
    printf("Ogrencinin Adi:\n");
    scanf("%s",ogr.ad);
    printf("Ogrencinin Soyadi:\n");
    scanf("%s",ogr.soyad);
    printf("Ogrencinin Numarasi:\n");
    scanf("%d",&ogr.no);

    printf("Ogrencinin Adi:%s\n",ogr.ad);
    printf("Ogrencinin Soyadi:%s\n",ogr.soyad);
    printf("Ogrencinin Numarasi:%d\n",ogr.no);
}


int main()
{
    ogrenci_bilgileri(ogr1);


    return 0;
}
