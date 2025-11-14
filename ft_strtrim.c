/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloubiat <sloubiat@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:34:36 by sloubiat          #+#    #+#             */
/*   Updated: 2025/11/14 16:33:46 by sloubiat         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

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
		while (set[j])
			if (s1[i] == set[j++])
			{
				size--;
				break;
			}
		i++;
	}
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	i = 0;
	k = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
			if (s1[i] == set[j++])
				break;
		if (j == ft_strlen(set))
			str[k++] = s1[i];
		i++;
	}
	str[k] = '\0';
	return (str);
}

int main(void)
{
	char s1[] = "bob aime le c";
	char s2[] = "abc";
	char *s3 = ft_strtrim(s1, s2);
	printf("%s", s3);
	return (0);
}
