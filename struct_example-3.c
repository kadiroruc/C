#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char ad[20];
    char soyad[20];
    int no;

}ogrenci;
//ogrenci adında bir tür oluşturulmuştur. struct ın ismi yoktur.

int main()
{
    ogrenci ogr1;
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
