/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionell15 <lionell15@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:41:23 by lionell15         #+#    #+#             */
/*   Updated: 2021/12/13 10:38:34 by lionell15        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

typedef t_list *nodo;

int main(void) 
{
	nodo head = ft_lstnew( "1ro");
	ft_lstadd_front(&head, ft_lstnew("head"));
	printf("\ntamaño de la lista: %d\n", ft_lstsize(head));
	nodo iter = head;
	while (iter != NULL)
	{
		printf("%s \n", (char *)iter->content);
		iter = iter->next;
	}
	printf("\n");
	free(head);
	return 0;
}
