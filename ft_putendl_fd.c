/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrandria <hrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 01:12:35 by hrandria          #+#    #+#             */
/*   Updated: 2022/11/12 01:13:34 by hrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
	i++;
	}
	write(1, "\n", 1);
}

/*
int	main(void)
{
	char	str[] = "bonjour";
	ft_putendl_fd(str, 1);

	return (0);
}
*/