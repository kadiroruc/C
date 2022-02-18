#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim,A,B;
    printf("ISLEMLER:\n1.Toplama\n2.Cikarma\n3.Carpma\n4.Bolme\n");
    printf("Yapilacak islemi seciniz:");
    scanf("%d",&secim);
    printf("Islem yapilacak A ve B sayilarini giriniz:\n");
    scanf("%d%d",&A,&B);


    switch(secim)
    {
        case 1:
            printf("%d+%d=%d",A,B,A+B);
            break;
        case 2:
            printf("%d-%d=%d",A,B,A-B);
            break;
        case 3:
            printf("%d*%d=%d",A,B,A*B);
            break;
        case 4:
            printf("%d/%d=%d",A,B,A/B);
            break;
        default:
            printf("Gecerli bir sayi girmediniz");


    }
    return 0;
}
