/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:19:44 by yantoine          #+#    #+#             */
/*   Updated: 2024/04/26 16:42:18 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	is_sorted(t_Liste *stack_a)
{
	t_Element	*current;

	if (!stack_a)
		return (0);
	if (stack_a->length == 0)
		return (1);
	current = stack_a->premier;
	while (current->suivant)
	{
		if (current->number > current->suivant->number)
			return (0);
		current = current->suivant;
	}
	return (1);
}
