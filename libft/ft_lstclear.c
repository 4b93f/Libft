/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 17:38:58 by chly-huc          #+#    #+#             */
/*   Updated: 2021/07/22 16:43:33 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*first;
	t_list	*tmp;

	if (lst == NULL || *lst == NULL)
		return ;
	first = *lst;
	tmp = NULL;
	while (first)
	{
		if (first->next)
			tmp = first->next;
		else
			tmp = NULL;
		del(first);
		free(first);
		first = tmp;
	}
	*lst = NULL;
}
/*
** Clear une liste chainée
*/
