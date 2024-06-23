/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:16:48 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/13 20:06:58 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	rotate(t_Liste *liste, char c)
{
	t_Element	*tmp;

	if (liste->length < 2)
		return ;
	tmp = liste->premier;
	liste->premier = liste->premier->suivant;
	liste->dernier->suivant = tmp;
	liste->dernier = tmp;
	tmp->suivant = NULL;
	if (c == 'a')
		write(1, "ra\n", 3);
	else if (c == 'b')
		write(1, "rb\n", 3);
	assign_param_list(liste);
}

void	rotate_both(t_Liste *stack_a, t_Liste *stack_b)
{
	rotate(stack_a, 0);
	rotate(stack_b, 0);
	write(1, "rr\n", 3);
}
