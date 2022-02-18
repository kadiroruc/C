#include <stdio.h>
#include <stdlib.h>


void copy(char *b,char *a,int n)
{
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
}

int main()
{
    char dizi[50],dizi2[50];
    int n;
    scanf("%d",&n);

    scanf("%s",dizi);

    copy(dizi2,dizi,n);
    for(int i=0;i<n;i++)
    {
        printf("%c",dizi2[i]);
    }

    return 0;
}
