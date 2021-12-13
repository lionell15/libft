/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionell15 <lionell15@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:41:23 by lionell15         #+#    #+#             */
/*   Updated: 2021/12/13 12:21:13 by lionell15        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

typedef t_list *nodo;

static void	f_del(void *ptr)
{
	size_t size =0;
	while (!(nodo *)ptr)
		size++;
	memset(ptr->content, 'a', size - 1);
}
int main(void) 
{
	nodo head = ft_lstnew( "1ro");
	ft_lstadd_front(&head, ft_lstnew("head"));
	ft_lstadd_back(&head, ft_lstnew("back")); 
	printf("\ntamaño de la lista: %d\n", ft_lstsize(head));
	nodo iter = head;
	while (iter != NULL)
	{
		printf("%s \n", (char *)iter->content);
		iter = iter->next;
	}
	printf("\n");

	nodo last = ft_lstlast(head);
	ft_lstdelone(last, f_del);
	//printf("el ultimo: %s\n", (char *)last->content);
	free(head);
	return 0;
}
