#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    printf("Hello world!\n");


    /**

    char charloco;
    charloco=conseguirChar("Dame un char : ", "eso no es un char, que hacemo?", 'a', 'h');
    printf("Tu char loco es : %c", charloco);
**/

    char garlompa[16];
    garlompa=conseguirString("dame un string","eso no es un string che",2,15);
    printf("Tu string loco es :   %s",garlompa);
    return 0;
}
