/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 00:28:07 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/13 00:30:59 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

t_Element	*ft_list_find(t_Liste *liste, int nb)
{
	t_Element	*element;

	if (!liste)
		return (NULL);
	element = liste->premier;
	while (element)
	{
		if (element->number == nb)
			return (element);
		element = element->suivant;
	}
	return (NULL);
}
