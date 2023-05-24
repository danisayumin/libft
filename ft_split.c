/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 19:52:59 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/05/13 18:28:46 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
    char **arr;
    size_t i;
    size_t j;
    size_t k;
    size_t len;

    if (!s)
        return (NULL);
    len = ft_strlen(s);
    arr = (char **)malloc(sizeof(char *) * (len + 1));
    if (!arr)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        k = i;
        while (s[i] && s[i] != c)
            i++;
        if (i > k)
        {
            arr[j] = ft_substr(s, k, i - k);
            j++;
        }
    }
    arr[j] = NULL;
    return (arr);
}