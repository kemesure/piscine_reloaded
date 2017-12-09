/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 16:31:05 by kemesure          #+#    #+#             */
/*   Updated: 2017/12/09 12:48:15 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		puiss;
	int		sign;
	int		nb;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\r'
			|| str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		sign = 44 - str[i];
		i++;
	}
	puiss = i;
	while (str[puiss] >= '0' && str[puiss] <= '9')
		puiss++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb += (str[i] - 48) * ft_puiss(10, puiss - i - 1);
		i++;
	}
	return (nb * sign);
}