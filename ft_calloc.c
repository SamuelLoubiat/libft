/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloubiat <sloubiat@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:56:59 by sloubiat          #+#    #+#             */
/*   Updated: 2025/11/12 16:25:42 by sloubiat         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t	total;
	char	*s;

	total = nmemb * size;
	s = (char *) malloc(total);
	if (!s)
		return (0);
	i = 0 ;
	while (i <= total)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
