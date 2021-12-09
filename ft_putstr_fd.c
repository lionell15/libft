#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int i;

	if (s != NULL)
	{
		i = 0;
		while (s[i])
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}
