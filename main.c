/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionell15 <lionell15@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:41:23 by lionell15         #+#    #+#             */
/*   Updated: 2021/12/07 11:17:29 by lionell15        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main()
{
   int i, n;
   int *a;

   printf("ingrese cantidad：");
   scanf("%d",&n);

   a = (int*)ft_calloc(n, sizeof(int));
   printf("ingrese numero para la posicion%d ：\n",n);
   for( i=0 ; i < n ; i++ ) 
   {
      scanf("%d",&a[i]);
   }

   printf("nuneros：");
   for( i=0 ; i < n ; i++ ) {
      printf("%d ",a[i]);
   }
}
