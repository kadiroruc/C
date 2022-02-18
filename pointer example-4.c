#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

double *maxadr(double a[],int boyut)
{
    int enbuyuk=INT_MIN;
    int sayac;
    for(int i=0;i<boyut;i++)
    {
        if(a[i]>enbuyuk)
        {
            enbuyuk=a[i];
            sayac=i;
        }
    }
    return &a[sayac];
}


int main()
{
   float dizi[6]={1.1,3.3,7.1,5.4,0.2,-1.5};
   float*p;

   for(int i=0;i<6;i++)
   {
       printf("%d. indis: %f Adresi:%p\n",i,dizi[i],&dizi[i]);
   }
    p=maxadr(dizi,6);
    printf("En buyuk elemanin adresi=%p",p);
    return 0;
}
