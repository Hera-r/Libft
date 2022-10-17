/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrandria <hrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:57:42 by hrandria          #+#    #+#             */
/*   Updated: 2022/10/17 12:37:23 by hrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("fake - : %d \n", ft_isalpha(123));
	printf("original - : %d \n", isalpha(122));

	return 0;
}
*/
