/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionell15 <lionell15@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:41:23 by lionell15         #+#    #+#             */
/*   Updated: 2021/12/07 10:37:01 by lionell15        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int	main(void)
{
	char	cadena[]="Leonel";
	char	find[] = "e";

	printf("buscar: %s\n", find);
	printf("en cadena: %s\n\n", cadena);
	printf("Resultado: %s\n\n", ft_strnstr(cadena, find, 8));
	return (0);
}
