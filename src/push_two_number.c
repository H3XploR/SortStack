/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_two_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:28:15 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/19 12:34:04 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	push_two_number(t_Liste *stack_a, t_Liste *stack_b)
{
	push(stack_a, stack_b, 'b');
	push(stack_a, stack_b, 'b');
	if (is_sorted(stack_b))
		swap(stack_b, 'b');
}
