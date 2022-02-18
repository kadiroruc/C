#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam=33;
    int *ptam;
    ptam = &tam;
    // veya int *ptam=&tam;
    printf("%p\n",&tam);// tam in adresi
    printf("%p\n",ptam);// ptam degeri yani tam in adresi
    printf("%p\n",&ptam);// ptam in adresi yani tam degerinin adresini tutan bellek gözünün adresi
    printf("%d\n",*ptam);// ptam isaretcisinin tuttugu adresin degeri


}
