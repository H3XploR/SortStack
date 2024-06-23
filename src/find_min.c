/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:10:13 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/13 20:18:53 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	find_min(t_Liste *liste)
{
	t_Element	*tmp;
	int			min;

	if (!liste->premier)
		return ;
	tmp = liste->premier;
	min = tmp->number;
	while (tmp)
	{
		if (tmp->number < min)
			min = tmp->number;
		tmp = tmp->suivant;
	}
	liste->min = min;
}
