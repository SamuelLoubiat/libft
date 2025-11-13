/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloubiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:37:55 by sloubiat          #+#    #+#             */
/*   Updated: 2025/11/10 13:22:28 by sloubiat         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] && s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
		i++;
	}
	if (i >= n)
		return (0);
	return (((unsigned char) s1[i]) - ((unsigned char) s2[i]));
}
