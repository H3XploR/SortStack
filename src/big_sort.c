/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:04:05 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/21 18:11:09 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "../includes/push_swap.h"

static int	wich_algo(t_Liste *stack_a, t_Liste *stack_b)
{
	if (stack_a->premier->number > stack_b->max)
		return (1);
	else if (stack_a->premier->number < stack_b->min)
		return (2);
	else
		return (3);
}

static void	exec_algo(t_Liste *stack_a, t_Liste *stack_b, int algo)
{
	int	i;

	i = 0;
	if (algo == 1)
		push(stack_a, stack_b, 'b');
	else if (algo == 2)
	{
		push(stack_a, stack_b, 'b');
		rotate(stack_b, 'b');
	}
	else
	{
		if (stack_a->premier->number >= stack_b->moyenne)
		{
			while (stack_a->premier->number < stack_b->premier->number)
			{
				rotate(stack_b, 'b');
				i++;
			}
			while (stack_a->premier->number >= stack_b->premier->number \
				&& stack_a->premier->number <= stack_b->dernier->number)
				push(stack_a, stack_b, 'b');
			while (i > 0)
			{
				if (stack_a->premier->number > stack_b->premier->number \
					&& stack_a->premier->number < stack_b->dernier->number)
					push(stack_a, stack_b, 'b');
				reverse_rotate(stack_b, 'b');
				i--;
			}
		}
		else
		{
			while (stack_a->premier->number < stack_b->premier->number \
				|| stack_a->premier->number > stack_b->dernier->number)
			{
				reverse_rotate(stack_b, 'b');
				i++;
			}
			while (stack_a->premier->number >= stack_b->premier->number \
				&& stack_a->premier->number <= stack_b->dernier->number)
				push(stack_a, stack_b, 'b');
			while (i >= 0)
			{
				if (stack_a->premier->number < stack_b->premier->number \
					&& stack_a->premier->number > stack_b->dernier->number)
					push(stack_a, stack_b, 'b');
				rotate(stack_b, 'b');
				i--;
			}
		}	
	}
}

void	big_sort(t_Liste *stack_a, t_Liste *stack_b)
{
	int	size;

	size = stack_a->length;
	while (stack_a->length > 1)
		exec_algo(stack_a, stack_b, wich_algo(stack_a, stack_b));
	while (stack_a->length != size)
		push(stack_a, stack_b, 'a');
}
*/
