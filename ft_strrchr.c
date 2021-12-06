#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			index;
	const char	*ini;

	ini = s;
	index = ft_strlen(s);
	s = (s + index);
	while (*s != *ini && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}