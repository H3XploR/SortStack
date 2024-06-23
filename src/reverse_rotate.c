/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:43:31 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/13 20:05:48 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	reverse_rotate(t_Liste *liste, char c)
{
	t_Element	*tmp;
	t_Element	*tmp2;

	if (liste->length < 2)
		return ;
	tmp = liste->premier;
	while (tmp->suivant->suivant)
		tmp = tmp->suivant;
	tmp2 = tmp->suivant;
	tmp->suivant = NULL;
	tmp2->suivant = liste->premier;
	liste->premier = tmp2;
	if (c == 'a')
		write(1, "rra\n", 4);
	else if (c == 'b')
		write(1, "rrb\n", 4);
	assign_param_list(liste);
}

void	reverse_rotate_both(t_Liste *stack_a, t_Liste *stack_b)
{
	reverse_rotate(stack_a, 0);
	reverse_rotate(stack_b, 0);
	write(1, "rrr\n", 4);
}
