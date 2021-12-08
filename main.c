/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionell15 <lionell15@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:41:23 by lionell15         #+#    #+#             */
/*   Updated: 2021/12/07 22:45:34 by lionell15        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main()
{
   char string[] = "XXXXXLionellXXXXX";
   char rem[] = "X";
   char *res;

   res = ft_strtrim(string, rem);
   printf("resultado: %s\n", res);
   free(res);
}
