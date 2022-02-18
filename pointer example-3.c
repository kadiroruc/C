#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* ortaklaribul(int x[],int y[],int z[],int n)
{
    int i,j,k,sayac=0;

    for(i=0;i<n;i++)
    {
        for(k=0;k<n;k++)
        {
            if(x[k]==x[i])
                break;
        }
        if(k!=i)
            continue;
        for(j=0;j<n;j++)
        {
            if(x[i]==y[j])
                break;
        }
        if(j!=n)
            z[sayac++]=x[i];

    }
    return z;
}


int main()
{
    srand(time(0));
    int a[50],b[50],c[51],n=50;
    int *cptr;

    for(int i=0;i<n;i++)
    {
        a[i]=rand()%1000+1;
        b[i]=rand()%1000+1;
    }

    printf("Ilk Dizi:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n\nIkinci Dizi:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }

    for(int i=0;i<=n;i++)
    {
       c[i]=-1;

    }
    cptr=ortaklaribul(a,b,c,n);

    if(cptr[0]==-1)
        printf("\n\nOrtak eleman bulunamadi.");
    else
        printf("\n\nBulunan ortak elemanlar:");
        int e=0;
        while(cptr[e]!=-1)
        {
            printf("%d ",cptr[e++]);
        }

    return 0;
}
