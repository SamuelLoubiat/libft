/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloubiat <sloubiat@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:12:28 by sloubiat          #+#    #+#             */
/*   Updated: 2025/11/16 18:34:09 by sloubiat         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
		if (s[i++] == c)
		{
			count++;
			while (s[i] == c)
				i++;
		}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int	words;
	char	**split;
	int	i;
	int	j;
	int	k;

	words = count_words(s, c);
	printf("%d\n", words);
	split = (char **) malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (0);
	i = 0;
	j = 0;
	k = 0;
	while (words > 0)
	{
		while (s[j] != c)
			j++;
		split[k++] = ft_substr(s, i, j);
		words--;
		i = j;
	}
	return (split);
}

int main(void)
{
	char *s = "split  ||this|for|me|||||!|";
 	int i = 0;
 	char **result = ft_split(s, '|');
 
 	while (result[i])
 	{
		printf("%s\n", result[i]);
 		free(result[i]);
		i++;
	}
	return (0);
}
