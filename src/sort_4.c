/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:34:09 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/14 23:22:34 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	suite(t_Liste *stack_a, t_Liste *stack_b)
{
	sort_3(stack_a);
	push(stack_a, stack_b, 'a');
	if (!is_sorted(stack_a))
		rotate(stack_a, 'a');
}

void	sort_4(t_Liste *stack_a, t_Liste *stack_b)
{
	int		min;
	int		max;
	int		i;

	if (is_sorted(stack_a))
		return ;
	min = stack_a->min;
	max = stack_a->max;
	i = 0;
	while (i < 4)
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
	suite(stack_a, stack_b);
}
