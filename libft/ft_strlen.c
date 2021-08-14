/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chly-huc <chly-huc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 09:52:06 by chly-huc          #+#    #+#             */
/*   Updated: 2021/02/16 17:21:19 by chly-huc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}
/*
** Compte le nombre de caractères dans une chaine de caractères
*/
