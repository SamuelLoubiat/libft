/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloubiat <sloubiat@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:03:28 by sloubiat          #+#    #+#             */
/*   Updated: 2025/11/13 16:23:14 by sloubiat         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int max_lenght;
	unsigned int	i;
	int	j;

	max_lenght = ft_strlen(s);
	j = 0;
	i = start;
	if (len + start > (unsigned long) max_lenght)
		len = max_lenght - start + 1;
	sub = (char *) malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	while (s[start] && start < i)
	{
		sub[j] = s[start];
		start++;
		j++;
	}
	sub[j] = '\0';
	return (sub);
}
