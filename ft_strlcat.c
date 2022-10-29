/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrandria <hrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:30:58 by hrandria          #+#    #+#             */
/*   Updated: 2022/10/29 17:42:56 by hrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen_size(char *str, size_t size)
{
	size_t	i;

	i = 0;
	while (str[i] && i < size)
		i++;
	return (i);
}

size_t	ft_len(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}

size_t	ft_strlcat(char *dest, char *src, size_t	size)
{
	size_t	i;
	size_t	len_d;

	i = 0;
	len_d = ft_strlen_size(dest, size);
	while (len_d + i < (size - 1) && src[i] && size)
	{
		dest[len_d + i] = src[i];
	i++;
	}
	if (len_d < size)
		dest[len_d + i] = '\0';
	return (len_d + ft_len(src));
}
