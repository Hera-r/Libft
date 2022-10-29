/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrandria <hrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:37:38 by hrandria          #+#    #+#             */
/*   Updated: 2022/10/29 17:24:02 by hrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size <= 0)
		return (ft_len(src));
	if (!dest || !src)
		return (0);
	while (src[i++] != '\0' && i++ < size - 1)
	{
		dest[i++] = src[i++];
	}
	dest[i] = '\0';
	return (ft_len(src));
}