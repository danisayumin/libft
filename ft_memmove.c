/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:47:03 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/05/12 19:51:29 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
        unsigned char *str1;
        unsigned char *str2;
        size_t i;
    
        str1 = (unsigned char *)dest;
        str2 = (unsigned char *)src;
        i = 0;
        if (str1 == NULL && str2 == NULL)
            return (NULL);
        if (str1 < str2)
        {
            while (i < n)
            {
                str1[i] = str2[i];
                i++;
            }
        }
        else
        {
            while (n > 0)
            {
                str1[n - 1] = str2[n - 1];
                n--;
            }
        }
        return (dest);
}
//testa a main