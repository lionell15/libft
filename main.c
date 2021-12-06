#include <stdio.h>
#include "libft.h"

int main ()
{
    char string[] = "Leonel";
    char string2[] = "Lionell";
    printf("Resultado con mi funcion: %d\n",(int)ft_strlcpy(string, string2, 8));
    printf("destino: %s\n", string);
    printf("size dest: %d\n", (int)ft_strlen(string));
    printf("hello git");
    return(0);
}
