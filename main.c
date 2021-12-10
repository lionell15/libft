/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionell15 <lionell15@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:41:23 by lionell15         #+#    #+#             */
/*   Updated: 2021/12/10 11:45:54 by lionell15        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void) 
{
    t_list *head = ft_lstnew( "Hello");
    head->next = ft_lstnew("World!");

    printf( "%s %s\n", ( char * )head->content, ( char * )head->next->content );

    return 0;
}
