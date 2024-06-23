/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:01:44 by yantoine          #+#    #+#             */
/*   Updated: 2024/04/29 11:12:14 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static void	anti_25(t_Liste *stack_a, t_Liste *stack_b)
{
	assign_param_list(stack_a);
	assign_param_list(stack_b);
}

void	push(t_Liste *stack_a, t_Liste *stack_b, char c)
{
	t_Element	*tmp;

	if (c == 'a')
	{
		tmp = stack_b->premier;
		if (tmp)
		{
			stack_b->premier = stack_b->premier->suivant;
			tmp->suivant = stack_a->premier;
			stack_a->premier = tmp;
		}
		write(1, "pa\n", 3);
	}
	else if (c == 'b')
	{
		tmp = stack_a->premier;
		if (tmp)
		{
			stack_a->premier = stack_a->premier->suivant;
			tmp->suivant = stack_b->premier;
			stack_b->premier = tmp;
		}
		write(1, "pb\n", 3);
	}
	anti_25(stack_a, stack_b);
}
