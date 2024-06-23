/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_lenght.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 23:57:34 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/13 20:20:04 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	list_lenght(t_Liste *liste)
{
	t_Element	*current;
	int			i;

	if (!liste || !liste->premier)
		return ;
	i = 0;
	current = liste->premier;
	while (current)
	{
		current = current->suivant;
		i++;
	}
	liste->length = i;
}
