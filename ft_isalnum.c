/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrandria <hrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:46:52 by hrandria          #+#    #+#             */
/*   Updated: 2022/10/17 15:16:30 by hrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}

/*
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("fake - : %d \n", ft_isalnum(7));
	printf("original - : %d \n", isalnum(7));
	return 0;
}
*/