//Abdulkadir Oruc

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[15]={5,8,5,5,1,2,4,7,7,7,7,9,9,5,7};
    int i,j;

    /*Bu dongude, dizinin 0.indisinden itibaren baslanarak dizinin elemanlari
    diger bütün elemanlarla karsılastirilir. Esitlik durumunda ic donguden cikilir.
    */
    for(i=0;i<15;i++)
    {
        for(j=0;j<15;j++)
        {
            if(arr[i]==arr[j])
            {
                break;
            }
        }
    /*Ic Dongunun kirildigi noktada "i" ve "j" degerleri esitse dizinin o indisindeki
    elemana kadar ayni degere sahip baska bir eleman bulunmamistir anlamina gelir ve
    bu elemanlar ekrana yazdirilir.
    */
        if(i==j)
            printf("%3d",arr[i]);


    }


    return 0;
}
