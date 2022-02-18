#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("***ASAL SAYI KONTROL PROGRAMI***\n\n(CIKMAK ICIN -1'E BASIN)\n\n");
    int sayi,i;
    while(1)
    {
        printf("Bir sayi giriniz:\n");
        scanf("%d",&sayi);
        if(sayi==-1)
        {
           printf("CIKIS YAPILDI...");
           break;
        }

        for(i=2;i<sayi;i++)
        {

            if(sayi%i==0)
                break;

        }
        if(i==sayi)
            printf("Girilen sayi asaldir\n\n");
        else
            printf("Girilen sayi asal degildir\n\n");
    }
    return 0;
}
