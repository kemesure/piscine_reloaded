/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 15:15:23 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/19 18:03:53 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strlen(char *str);

int		main(void)
{
	printf("   strlen : %d\n", strlen("bonjour\n"));
	printf("ft_strlen : %d\n", ft_strlen("bonjour\n"));
	return (0);
}
