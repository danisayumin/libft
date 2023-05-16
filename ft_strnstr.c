/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 23:36:59 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/05/11 21:41:49 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    
        size_t i;
        size_t j;
    
        i = 0;
        if (needle[0] == '\0')
            return ((char *)haystack);
        if (len == 0)
            return (NULL);
        while (haystack[i] != '\0' && i < len)
        {
            j = 0;
            while ((haystack[i + j] == needle[j]) && (i + j < len))
            {
                if (needle[j + 1] == '\0')
                    return ((char *)&haystack[i]);
                j++;
            }
            i++;
        }
        return (NULL);
}
//testa a main