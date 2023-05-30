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

static int	count_word(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 1;
	i = 0;
	while (s[i])
	{
		if (s[i++] == c && s[i] != c)
			count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		word;
	char	**result;

	if (s == NULL)
		return (NULL);
	word = count_word(s, c);
	result = (char **)malloc((word + 1) * sizeof(char *));
	if (result == NULL)
		return(NULL);
	
}

#include <stdio.h>
int	main(void)
{
	printf("result count_word: %d", count_word("batata quente frita", ' '));
}
