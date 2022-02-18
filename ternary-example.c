#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    switch(c)
    {
        case1:
        case2:
            b=5;
            break;
        case3:
            if(d>0)
                b=6;
            else
                b=7;
                break;
        default:
            b=8;

    }

    */

    int c,d,b;
    d=5;
    c=1;
    b=((c==1)||(c==2))?5:(c==3)?(d>0)?6:7:8;
    printf("%d",b);
    return 0;
}
