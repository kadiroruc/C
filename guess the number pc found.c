#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int sayi,sayi2;
    srand(time(0));
    sayi=rand()%100;


        for(;;){
        printf("Sayiyi giriniz:");
        scanf("%d",&sayi2);
        if(sayi==sayi2){
            printf("Tebrikler sayiyi buldunuz.\n");
            break;
        }
        else if(sayi2>sayi)
            printf("Asagi in!\n");
        else
            printf("Yukari cik\n");
    }
    return 0;
}
