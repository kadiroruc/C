#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void giris()//Giris yazisi ve kurallar icin fonksiyon.
{
    printf("*************** TAS KAGIT MAKAS OYUNUNA HOSGELDINIZ ***************\n\n");
    printf("Kurallari okumak icin TAB'a basin. Oyuna devam etmek icin herhangi bir tusa basin.\n\n");
    char girdi=getch();
    if(girdi==9)
    {

        printf("Oyuncular tas,kagit,makastan birini secer.\n\nTas,makasi yener.\nMakas,Kagiti yener.\nKagit,tasi yener.\n");
        printf("Her roundda 1 puan kazanilir. 5 puana ilk ulasan oyuncu kazanir.\n");
        printf("Secimler ayni oldugu durumda oyuncular 0 puan alir. Secimler tekrar yapilir.\n\n\n");

    }
    else
        ;
}




int round(char kullanici, char bilgisayar)//Her defasinda secilen nesnelerden kazanani belirleyen fonksiyon.
{

    if(kullanici==bilgisayar)
        return 0;
    else if(kullanici=='k'&&bilgisayar=='t')
        return 2;
    else if(kullanici=='t'&&bilgisayar=='m')
        return 2;
    else if(kullanici=='m'&&bilgisayar=='k')
        return 2;
    else if(kullanici=='t'&&bilgisayar=='k')
        return 1;
    else if(kullanici=='m'&&bilgisayar=='t')
        return 1;
    else if(kullanici=='k'&&bilgisayar=='m')
        return 1;
}

void oyun()//Oyunun oynandigi,kazananin belirlendigi,ve tur sayisiyla birlikte seçilen nesnelerin ekrana yazdirildigi fonksiyon.
{
    char nesne[3]={'t','k','m'};
    int puan_k=0,puan_b=0,sayac=0;
    int secim_b;
    char secim_k,secimler_k[51],secimler_b[51];



    for(;;)//Oyunculardan birisinin 5 puana ulasana kadar oynandigi döngü.
    {
        printf("Tas, kagit, makastan birini giriniz(Tas:t Kagit:k Makas:m):");
        scanf(" %c",&secim_k);

        if(((secim_k!='t')&&(secim_k!='k')&&(secim_k!='m')))
        {
            printf("Hatali Secim!! Tekrar Giriniz:\n");
            continue;

        }

        secimler_k[sayac]=secim_k;

        srand(time(0));
        secim_b=rand()%3;
        secimler_b[sayac]=nesne[secim_b];
        sayac++;

        int sonuc=round(secim_k,nesne[secim_b]);//Secilen nesnelerden kazanani belirleyen round fonksiyonuna arguman verilmesi.
        printf("Bilgisayarin secimi:%c\n\n",nesne[secim_b]);

        switch(sonuc)//Tur sonunda puan durumunun olusturulmasi.
        {
            case 0:
                printf("Berabere!\n\n");
                break;
            case 1:
                puan_b++;
                break;
            case 2:
                puan_k++;
                break;

        }

        printf("***Puan Durumu***\nKullanici:%d\nBilgisayar=%d\n\n\n\n",puan_k,puan_b);

        if((puan_b==5)||(puan_k==5))
            break;

    }
    if(puan_b>puan_k)
        printf("Bilgisayar Kazandi! Skor(%d-%d)\n",puan_k,puan_b);
    else
        printf("Kullanici Kazandi! Skor(%d-%d)\n\n\n",puan_k,puan_b);


    for(int i=0;i<sayac;i++)//Tur sayisini ve turlarda secilen nesneleri ekrana yazdiran döngü.
    {
        printf("%d.Tur:\t\tKullanici=%c\t\tBilgisayar:%c\n\n",i+1,secimler_k[i],secimler_b[i]);
    }


}

int main()
{
    giris();
    oyun();

    return 0;
}
