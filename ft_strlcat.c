/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 23:18:26 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/05/10 23:36:20 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (dstsize <= i)
		j = j + dstsize;
	else
		j = j + i;
	while (src[k] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	return (j);
}