/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionell15 <lionell15@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:51:24 by lionell15         #+#    #+#             */
/*   Updated: 2021/12/14 15:51:26 by lionell15        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*string1;
	unsigned char	*string2;

	if (n == 0)
		return (0);
	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	while ((*string1 == *string2) && n - 1 > 0)
	{
		string1++;
		string2++;
		n--;
	}
	return (*string1 - *string2);
}
