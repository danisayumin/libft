/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 19:52:59 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/05/29 21:47:33 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

static	int	ft_size_word(const char *s, char c)
{
	size_t	size;

	size = 0;
	while (s[size] != c && s[size])
		size++;
	return (size);
}

char	**ft_split(char const *s, char c)
{
	int		word;
	char	**result;
	size_t	i;
	size_t	size;

	i = 0;
	if (s == NULL)
		return (NULL);
	word = ft_count_word(s, c);
	result = (char **)malloc((word + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);

	result[--j] = NULL;
	return (result);
}
