/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionell15 <lionell15@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:44:39 by lionell15         #+#    #+#             */
/*   Updated: 2021/12/14 19:17:01 by lionell15        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t				index;
	int					sign;
	unsigned long int	result;

	index = 0;
	sign = 1;
	result = 0;
	while (IS_WSPACE(str[index]))
		index++;
	if (str[index] == '+' || str[index] == '-')
		if (str[index++] == '-')
			sign *= -1;
	while (ft_isdigit(str[index]))
	{
		result *= 10;
		result += str[index] - '0';
		index++;
	}
	return (result * sign);
}
