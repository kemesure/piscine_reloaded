/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemesure <kemesure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 16:03:19 by kemesure          #+#    #+#             */
/*   Updated: 2017/11/25 13:51:48 by kemesure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = b;
	while (len != 0)
	{
		ptr[i] = c;
		len--;
		i++;
	}
	return (b);
}

int		main(void)
{
	char	*b1;
	char	*b2;
	int		c;
	size_t	len;

	b1 = (char *)malloc(42);
	b2 = (char *)malloc(42);
	c = 'b';
	len = 3;
	strcpy(b1, "bonjour");
	strcpy(b2, "bonjour");
	printf("   memset(\"%s\", 110, 4) : \"%s\"\n", b1, (char *)   memset(b1, c, len));
	printf("ft_memset(\"%s\", 110, 4) : \"%s\"\n", b2, (char *)ft_memset(b2, c, len));
	return (0);
}
