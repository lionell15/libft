/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionell15 <lionell15@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:41:23 by lionell15         #+#    #+#             */
/*   Updated: 2021/12/10 10:25:58 by lionell15        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
	int num;

	num =-42;
	/* Creación y apertura del fichero */
	int fichero = open ("mi_fichero", O_CREAT|O_WRONLY);
	/* Comprobación de errores */
   	if (fichero==-1)
   	{
        	perror("Error al abrir fichero:");
       		exit(1);
   	}

   	/* Escritura de la cadena */
	ft_putnbr_fd(num, fichero);
   	close(fichero);
   return 0;
}
