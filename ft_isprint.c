/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrandria <hrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:38:00 by hrandria          #+#    #+#             */
/*   Updated: 2022/10/19 16:26:50 by hrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if ((c >= 1 && c <= 31) || (c == 127))
		return (0);
	return (1);
}

/*
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("fake - : %d \n", ft_isprint(77));
	printf("original - : %d \n", isprint(77));

	return (0);
}
*/