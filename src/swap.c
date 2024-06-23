/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:34:45 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/14 22:27:09 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	swap(t_Liste *liste, char c)
{
	t_Element	*tmp;

	if (liste->length < 2)
		return ;
	tmp = liste->premier;
	liste->premier = liste->premier->suivant;
	tmp->suivant = liste->premier->suivant;
	liste->premier->suivant = tmp;
	if (c == 'a')
		write(1, "sa\n", 3);
	else if (c == 'b')
		write(1, "sb\n", 3);
	assign_param_list(liste);
}

void	swap_both(t_Liste *stack_a, t_Liste *stack_b)
{
	swap(stack_a, 0);
	swap(stack_b, 0);
	write(1, "ss\n", 3);
}
