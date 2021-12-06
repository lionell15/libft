#include <stdio.h>
#include "libft.h"

int main ()
{
    char string[] = "Leonel";
    char string2[] = "Lionell";
    printf("Resultado con mi funcion: %d\n", ft_strlcpy(string, string2, 8));
    printf("destino: %s\n", string);
    printf("size dest: %d\n", ft_strlen(string));
    return(0);
}