/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrandria <hrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:09:33 by hrandria          #+#    #+#             */
/*   Updated: 2022/10/29 18:14:21 by hrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>
int main() {

	char f;

	f = 'M';
	printf("%c -> %c", f, ft_tolower(f));

	f = 'D';
	printf("\n%c -> %c", f, ft_tolower(f));

	f = '9';
	printf("\n%c -> %c\n\n", f, ft_tolower(f));

	printf("######ORIGIN########\n\n");
	
	char c;

	c = 'M';
	printf("%c -> %c", c, tolower(c));

	c = 'D';
	printf("\n%c -> %c", c, tolower(c));

	c = '9';
	printf("\n%c -> %c", c, tolower(c));
	return 0;
}
*/