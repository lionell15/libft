/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionell15 <lionell15@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:41:23 by lionell15         #+#    #+#             */
/*   Updated: 2021/12/09 21:23:23 by lionell15        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
	/* char que se va a escribir */
	char c[] = "lionell";
	/* Creación y apertura del fichero */
	int fichero = open ("mi_fichero", O_CREAT|O_WRONLY);
	/* Comprobación de errores */
   	if (fichero==-1)
   	{
        	perror("Error al abrir fichero:");
       		exit(1);
   	}

   	/* Escritura de la cadena */
	ft_putstr_fd(c, fichero);
   	close(fichero);
   return 0;
}
