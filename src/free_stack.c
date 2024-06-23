/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:26:53 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/14 22:58:30 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	free_stack(t_Liste *stack_a, t_Liste *stack_b)
{
	t_Element	*tmp;

	if (stack_a)
	{
		while (stack_a->premier)
		{
			tmp = stack_a->premier;
			stack_a->premier = stack_a->premier->suivant;
			free(tmp);
		}
	}
	if (stack_b)
	{
		while (stack_b->premier)
		{
			tmp = stack_b->premier;
			stack_b->premier = stack_b->premier->suivant;
			free(tmp);
		}
	}
	if (stack_a)
		free(stack_a);
	if (stack_b)
		free(stack_b);
}
