/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrandria <hrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:45:33 by hrandria          #+#    #+#             */
/*   Updated: 2022/10/17 15:49:52 by hrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("fake - : %d \n", ft_isascii(1));
	printf("original - : %d \n", isascii(1));

	return 0;
}
*/