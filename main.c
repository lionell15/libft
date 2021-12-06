/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionell15 <lionell15@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:41:23 by lionell15         #+#    #+#             */
/*   Updated: 2021/12/06 22:33:08 by lionell15        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int	main(void)
{
	char	string[6];
	char	string2[7];

	strncpy(string, "Leonel", 6);
	strncpy(string2, "Lionel", 6);
	printf("Resultado: %d\n", (int)ft_strlcpy(string, string2, 7));
	printf("destino: %s\n", string);
	printf("size dest: %d\n", (int)ft_strlen(string));
	return (0);
}
