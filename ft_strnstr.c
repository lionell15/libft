#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t index;
	size_t jndex;

	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	index = 0;
	jndex = 0;
	while (1)
	{
		if (needle[jndex] == '\0')
			return ((char *)(haystack + (index - jndex)));
		if (haystack[index] == needle[jndex])
			jndex++;
		else
		{
			index -= jndex;
			jndex = 0;
		}
		if (haystack[index] == '\0' || index >= len)
			return (NULL);
		index++;
	}
}
