/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:03:40 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/21 23:43:04 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	condition(t_Element *actuel_a, t_Element *actuel_b, t_Liste *stack_b)
{
	if (actuel_a->number < stack_b->min)
	{
		if (actuel_b->number == stack_b->max)
		{
			return (1);
		}
	}
	else if (actuel_a->number > stack_b->max)
	{
		if (actuel_b->number == stack_b->max)
		{
			return (1);
		}
	}
	else if (actuel_a->number > actuel_b->number \
		&& actuel_a->number < actuel_b->precedant_boucle->number)
	{
		return (1);
	}
	return (0);
}
