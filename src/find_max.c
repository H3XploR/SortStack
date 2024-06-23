/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:13:28 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/18 20:14:44 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	find_max(t_Liste *liste)
{
	t_Element	*tmp;
	int			max;

	if (!liste->premier)
		return ;
	tmp = liste->premier;
	max = tmp->number;
	while (tmp)
	{
		if (tmp->number > max)
			max = tmp->number;
		tmp = tmp->suivant;
	}
	liste->max = max;
}
