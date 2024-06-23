/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_last.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yantoine <yantoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:15:26 by yantoine          #+#    #+#             */
/*   Updated: 2024/03/18 20:16:57 by yantoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	find_last(t_Liste *liste)
{
	t_Element	*tmp;

	if (!liste->premier)
		return ;
	tmp = liste->premier;
	while (tmp->suivant)
		tmp = tmp->suivant;
	liste->dernier = tmp;
}
