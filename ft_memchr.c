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

void	*ft_memchr(const void *s, int c, size_t n)
{
            unsigned char *str;
            size_t i;
    
            str = (unsigned char *)s;
            i = 0;
            while (i < n)
            {
                if (str[i] == (unsigned char)c)
                    return ((void *)&str[i]);
                i++;
            }
            return (NULL);
}
//testa a main