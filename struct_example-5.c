#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char ad[20];
    char soyad[20];
    int no;

}ogrenci;
/*Adı olmayan bir yapı tanımlanır ve ogrenci adında bir tür oluşturulur. 
typedef anahtar kelimesi sayesinde struct anahtarını kullanmadan doğrudan ogrenci türüyle değişken tanımlanabilir.
*/
void ogrenci_bilgileri(ogrenci ogr)
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
    ogrenci ogr1;
    ogrenci_bilgileri(ogr1);


    return 0;
}
