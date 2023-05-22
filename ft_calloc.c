/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 21:43:07 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/05/20 03:49:04 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
<<<<<<< HEAD
    void *ptr;

    ptr = malloc(count * size);
=======
    char *ptr;

    ptr = (char *)malloc(count * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, count * size);
    return (ptr);
>>>>>>> fc733811988a096d0562bbab1a6ea4a1e2c424ce
}
