/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloubiat <sloubiat@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 11:07:09 by sloubiat          #+#    #+#             */
/*   Updated: 2025/11/11 11:52:53 by sloubiat         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*s1;
	const char	*s2;

	s1 = dest;
	s2 = src;
	if (!dest && !src)
		return (0);
	while (n > 0)
	{
		*s1 = *s2;
		s1++;
		s2++;
		n--;
	}
	return (dest);
}
