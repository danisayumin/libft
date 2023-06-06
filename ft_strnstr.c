/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 23:36:59 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/06/05 22:48:07 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (big[i] != '\0' && i < len)
	{
		while ((big[i + j] == little[j]) && (i + j < len))
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
		j = 0;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main()
// {
// 	char big[] = "lorem ipsum dolor sit amet";
// 	char little[] = "ipsumm";
// 	size_t len = 30;

// 	char *result = ft_strnstr(big, little, len);
// 	printf("%s", result);
// }