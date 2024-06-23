/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:41:18 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/13 20:41:42 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	list_index(t_Liste *liste)
{
	t_Element	*tmp;
	int			i;

	i = 0;
	tmp = liste->premier;
	while (tmp)
	{
		tmp->index = i;
		tmp = tmp->suivant;
		i++;
	}
}
