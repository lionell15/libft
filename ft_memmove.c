#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	index;

	if (!dst && !src)
		return (0);
	index = 0;
	if ((size_t)dst - (size_t)src < len)
	{
		index = len - 1;
		while (index < len)
		{
			((unsigned char *)dst)[index] = ((unsigned char *)src)[index];
			index--;
		}
	}
	else
	{
		while (index < len)
		{
			((unsigned char *)dst)[index] = ((unsigned char *)src)[index];
			index++;
		}
	}
	return (dst);
}
