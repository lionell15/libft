#include <stdio.h>
#include "libft.h"

int main(void)
{
	char *cadena = "42";

	printf("cadena: %s\n", cadena);
	printf("Resultado: %d\n", ft_atoi(cadena));
	return (0);
}
