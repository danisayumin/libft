/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:47:03 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/06/04 17:43:31 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	i = 0;
	if (str1 == NULL && str2 == NULL)
		return (NULL);
	if (str1 < str2)
	{
		while (n--)
			*str1++ = *str2++;
	}
	else
	{
		while (n--)
			str1[n] = str2[n];
	}
	return (dest);
}
