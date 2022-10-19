/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrandria <hrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:30:55 by hrandria          #+#    #+#             */
/*   Updated: 2022/10/19 17:18:53 by hrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	i++;
	return (i);
}

/*
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	char str[] = "hrandria";
	printf("len fake %d :\n", ft_strlen(str));
	printf("len original %ld :\n", strlen(str));

	return (0);
}
*/