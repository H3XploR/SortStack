/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:58:35 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/14 22:57:44 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	sort_5(t_Liste *stack_a, t_Liste *stack_b)
{
	int		min;
	int		max;
	int		i;

	if (is_sorted(stack_a))
		return ;
	min = stack_a->min;
	max = stack_a->max;
	i = 0;
	while (i < 5)
	{
		if (stack_a->premier->number == min \
			|| stack_a->premier->number == max)
		{
			push(stack_a, stack_b, 'b');
			break ;
		}
		else
			rotate(stack_a, 'a');
		i++;
	}
	sort_4(stack_a, stack_b);
	push(stack_a, stack_b, 'a');
	if (!is_sorted(stack_a))
		rotate(stack_a, 'a');
}
