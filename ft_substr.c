/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:01:04 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/05/25 21:03:25 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	size_t	len_a;
	char	*substr;

	len_a = len;
	substr = (char *)malloc((len_a + 1) * sizeof(char));
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (NULL);
	else if (start + len_a > len_s)
		len_a = len_s - start;
	if (substr == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(substr, s + start, len_a);
	substr[len_a] = '\0';
	return (substr);
}
