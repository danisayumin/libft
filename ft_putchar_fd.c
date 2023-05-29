/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsayumi- <dsayumi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 22:25:09 by dsayumi-          #+#    #+#             */
/*   Updated: 2023/05/28 17:29:28 by dsayumi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
