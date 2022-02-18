#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    int dizi[1000],i,n;
    printf("Kac eleman gireceksiniz?");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Dizinin %d. elemanini giriniz:\n",i+1);
        scanf("%d",&dizi[i]);
    }
    int enkucuk=INT_MAX;
    int enbuyuk=INT_MIN;

    for(i=0;i<n;i++)
    {
        if(dizi[i]<enkucuk)
            enkucuk=dizi[i];
        if(dizi[i]>enbuyuk)
            enbuyuk=dizi[i];


    }
    printf("Dizinin en buyuk degeri=%d\n",enbuyuk);
    printf("Dizinin en kucuk degeri=%d\n\n",enkucuk);
    return 0;
}
