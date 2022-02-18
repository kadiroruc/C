#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void sort(int *a,int *b,int n)
{
    int enkucuk_indis;
    for(int i=0;i<n;i++)
    {
        int enkucuk=INT_MAX;
        for(int j=0;j<n;j++)
        {
            if(*(a+j)<enkucuk){
                enkucuk=*(a+j);
                enkucuk_indis=j;
            }

        }
        *(b+i)=enkucuk;
        *(a+enkucuk_indis)=INT_MAX;
    }

}



int main()
{
   int dizi[50],dizi2[50];
   int n;
   printf("n:");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&dizi[i]);
   }

   sort(dizi,dizi2,n);
   for(int i=0;i<n;i++)
   {
       printf("%d",dizi2[i]);
   }

    return 0;
}
