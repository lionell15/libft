/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lespinoz <lespinoz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:22:57 by lespinoz          #+#    #+#             */
/*   Updated: 2022/01/18 12:29:06 by lespinoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	j;

	index = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[index] != '\0')
	{
		j = 0;
		while (haystack[index + j] == needle[j] && (index + j) < len)
		{
			if (haystack[index + j] == '\0' && needle[j] == '\0')
				return ((char *)&haystack[index]);
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + index);
		index++;
	}
	return (0);
}
