/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:46:06 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/21 22:49:32 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	ft_list_push_back(t_Liste *liste, int valeur)
{
	t_Element	*element;
	t_Element	*current;

	element = malloc(sizeof(*element));
	if (!element)
		return ;
	element->number = valeur;
	element->ptr_num = 0;
	element->instruction = 0;
	element->instruction_ra = 0;
	element->instruction_rb = 0;
	element->instruction_rab = 0;
	element->suivant = NULL;
	if (liste->premier == NULL)
		liste->premier = element;
	else
	{
		current = liste->premier;
		while (current->suivant)
			current = current->suivant;
		current->suivant = element;
	}
}
