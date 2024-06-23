/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:36:07 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/14 22:09:01 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

int	parse_args(t_Liste *stack_a, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!parse_arg(stack_a, argv[i]))
			return (0);
		i++;
	}
	return (1);
}
