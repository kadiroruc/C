#include <stdio.h>
#include <stdlib.h>

struct ogrenci
{
    char ad[20];
    char soyad[20];
    int no;

}ogr1,ogr2;


int main()
{

    printf("Ogrencinin Adi:\n");
    scanf("%s",ogr1.ad);
    printf("Ogrencinin Soyadi:\n");
    scanf("%s",ogr1.soyad);
    printf("Ogrencinin Numarasi:\n");
    scanf("%d",&ogr1.no);

    ogr2=ogr1;

    printf("Ogrencinin Adi:%s\n",ogr2.ad);
    printf("Ogrencinin Soyadi:%s\n",ogr2.soyad);
    printf("Ogrencinin Numarasi:%d\n",ogr2.no);

    return 0;
}
