/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 00:49:31 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/14 23:18:56 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static void	anti_25(t_Liste *stack_a, int min, int max)
{
	if (stack_a->premier->suivant->number == max)
	{
		if (stack_a->premier->suivant->suivant->number == min)
			reverse_rotate(stack_a, 'a');
		else
		{
			reverse_rotate(stack_a, 'a');
			swap(stack_a, 'a');
		}
	}
	else
	{
		if (stack_a->premier->suivant->suivant->number == max)
			swap(stack_a, 'a');
		else
		{
			reverse_rotate(stack_a, 'a');
			swap(stack_a, 'a');
		}
	}
}

void	sort_3(t_Liste *stack_a)
{
	int	min;
	int	max;

	if (is_sorted(stack_a))
		return ;
	min = stack_a->min;
	max = stack_a->max;
	if (stack_a->premier->number == max)
	{
		if (stack_a->premier->suivant->number == min)
			rotate(stack_a, 'a');
		else
		{
			swap(stack_a, 'a');
			reverse_rotate(stack_a, 'a');
		}
	}
	else
		anti_25(stack_a, min, max);
}
