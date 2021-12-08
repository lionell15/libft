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
   char string[] = "l1,l2,l3,l4,l5";
   char split = ',';
   char **res;
   int i;

   i =0 ;
   res = ft_split(string, split);
   while (res[i])
   {
      printf("resultado: %s\n", res[i]);
      i++;
   }
   free(res);
}
