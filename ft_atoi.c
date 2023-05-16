/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 21:43:07 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/05/11 22:46:34 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;

    i = 0;
    sign = 1;
    while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' || *str == '\r' || *str == '\f')
        str++;
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign *= -1;
        
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        i = i * 10 + (*str - '0');
        str++;
    }
    return (i * sign);
}
