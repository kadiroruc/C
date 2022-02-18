#include <stdio.h>
#include <stdlib.h>

int *sum(int *a,int *b,int n)
{
    for(int i=0;i<n;i++)
    {
        *b+=*(a+i);
    }
    return b;
}



int main()
{
    int n;
    printf("n:");
    scanf("%d",&n);
    int dizi[100],toplam=0;
    int *p;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&dizi[i]);
    }

    p=sum(dizi,&toplam,n);
    printf("%d",*p);
    //printf("%d",*sum(dizi,&toplam,n)); //Boylede olabilir.

    return 0;
}
