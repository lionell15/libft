#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t  index;

	index = 0;
	if (!dst && !src)
		return (0);
	while (index < n)
	{
		((unsigned char *)dst)[index] = ((unsigned char *)src)[index];
		if ((unsigned char)c == ((unsigned char *)src)[index])
			return (dst + index + 1);
		index++;
	}
	return (0);
}