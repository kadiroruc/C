#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,**pp,***ppp,****pppp,*****ppppp;
    int tam=58;
    p=&tam;
    pp=&p;
    ppp=&pp;
    pppp=&ppp;
    ppppp=&pppp;

    /*printf("%p\n",&tam);
    printf("%p\n",p);
    printf("%p\n",*pp);
    printf("%p\n",**ppp);
    printf("%p\n",***pppp);
    printf("%p\n",****ppppp);*/

    printf("%d\n",tam);
    printf("%d\n",*p);
    printf("%d\n",**pp);
    printf("%d\n",***ppp);
    printf("%d\n",****pppp);
    printf("%d\n",*****ppppp);



    return 0;
}
