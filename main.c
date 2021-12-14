/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionell15 <lionell15@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:41:23 by lionell15         #+#    #+#             */
/*   Updated: 2021/12/14 19:27:38 by lionell15        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

typedef t_list	*t_nodo;

static void	f_del(void *ptr)
{
	t_nodo	ptrnodo;
	size_t	size;

	ptrnodo = ptr;
	size = 0;
	while (!ptrnodo)
		size++;
	ft_memset(ptrnodo->content, 'a', size - 1);
}

int	main(void)
{
	t_nodo	head;
	t_nodo	iter;
	t_nodo	last;
	t_nodo	alast;

	head = ft_lstnew("1ro");
	ft_lstadd_front(&head, ft_lstnew("head"));
	ft_lstadd_back(&head, ft_lstnew("back"));
	printf("\ntamaño de la lista: %d\n", ft_lstsize(head));
	iter = head;
	while (iter != NULL)
	{
		printf("%s \n", (char *)iter->content);
		iter = iter->next;
	}
	printf("\n");
	last = ft_lstlast(head);
	ft_lstdelone(last, f_del);
	alast = ft_lstlast(head);
	printf("el ultimo: %s\n", (char *)alast->content);
	free(head);
	return (0);
}
