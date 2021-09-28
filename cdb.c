#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num, t;
    char binario[100];

    // Lectura del número a convertir
    scanf("%d", &num);

    //Copiando la cadena vacía a la variable binario
    strcpy(binario, "");

    do
    {
        char t2[0];
        t = num % 2;
        num = (int)(num /2);
        if (t==1) 
        {
            t2[0] = '1';
        }
        else
        {
            t2[0] = '0';
        }
        strcat(binario, t2);
    } while (num != 1 && num != 0);
    
    if (num!=1)
    {
        strcat(binario, "1");
    }
    
    for (int i = strlen(binario)-1; i >= 0; i--)
    {
        printf("%c", binario[1]);
    }
    
    printf("\n");
    return 0;    
}


