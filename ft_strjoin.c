/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:44:03 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/05/25 21:52:12 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!new_str)
		return (NULL);
	while (i < len_s1)
	{
		new_str[i] = len_s1[i];
		i++;
	}
	while (j < len_s2)
	{
		new_str[i + j] = len_s2[j];
		j++;
	}
	new_str[i + j] = '\0';
	return (new_str);
}
