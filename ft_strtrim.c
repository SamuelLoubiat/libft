/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloubiat <sloubiat@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:34:36 by sloubiat          #+#    #+#             */
/*   Updated: 2025/11/14 17:23:39 by sloubiat         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int is_set(char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		size;
	int		i;
	int		j;
	int		k;

	size = ft_strlen(s1);
	i = 0;
	while(s1[i])
	{
		j = 0;
		if (is_set((char *) set, s1[i]))
			size--;
		i++;
	}
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	i = 0;
	k = 0;
	while (s1[i])
	{
		if (!is_set((char *) set, s1[i]))
			str[k++] = s1[i];
		i++;
	}
	str[k] = '\0';
	return (str);
}

/*int main(void)
{
	char s1[] = "bob aime le c";
	char s2[] = "abc";
	char *s3 = ft_strtrim(s1, s2);
	printf("%s", s3);
	return (0);
}*/
