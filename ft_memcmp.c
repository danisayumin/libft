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

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
        
        unsigned char *str1;
        unsigned char *str2;
        size_t i;
    
        str1 = (unsigned char *)s1;
        str2 = (unsigned char *)s2;
        i = 0;
        if (n == 0)
            return (0);
        while (i < n)
        {
            if (str1[i] != str2[i])
                return (str1[i] - str2[i]);
            i++;
        }
        return (0);
}
