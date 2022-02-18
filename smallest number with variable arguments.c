#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>

int enkucuksayi(int n,...)
{
    int enkucuk=INT_MAX,i,dizi[50];
    va_list x;
    va_start(x,n);

    for(i=0;i<n;i++)
    {
       dizi[i]=va_arg(x,int);
    }
    for(i=0;i<n;i++)
    {
        if(dizi[i]<enkucuk)
            enkucuk=dizi[i];

    }
    va_end(x);
    return enkucuk;
}

int main()
{
    int a=enkucuksayi(5,324,235,566,123,232);
    printf("%d",a);
    return 0;
}
