/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:31:18 by yantoine          #+#    #+#             */
/*   Updated: 2024/04/29 11:11:48 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static void	ft_free_split(char **split)
{
	int	i;

	i = 0;
	if (!split)
		return ;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static int	verif_string(char *string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (!ft_isdigit(string[i]) && \
			string[i] != '-' && string[i] != '+')
			return (0);
		i++;
	}
	return (1);
}

static int	ft_atoi_custom(char *string, t_Liste *stack)
{
	long int	nb;

	if (!string || stack == NULL)
		return (0);
	nb = ft_atoi(string);
	if (nb > INT_MAX || nb < INT_MIN)
		return (0);
	if (ft_list_find(stack, nb))
		return (0);
	ft_list_push_back(stack, nb);
	return (1);
}

int	parse_arg(t_Liste *stack_a, char *arg)
{
	int		i;
	char	**split;

	i = 0;
	split = ft_split(arg, ' ');
	while (split[i])
	{
		if (!verif_string(split[i]))
		{
			ft_free_split(split);
			return (0);
		}
		if (!ft_atoi_custom(split[i], stack_a))
		{
			ft_free_split(split);
			return (0);
		}
		i++;
	}
	ft_free_split(split);
	return (1);
}
