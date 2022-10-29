/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrandria <hrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:45:33 by hrandria          #+#    #+#             */
/*   Updated: 2022/10/29 18:00:43 by hrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>
int main() {

    char f;

    f = 'm';
    printf("%c -> %c", f, ft_toupper(f));

    f = 'D';
    printf("\n%c -> %c", f, ft_toupper(f));

    f = '9';
    printf("\n%c -> %c\n\n", f, ft_toupper(f));

	printf("######ORIGIN########\n\n");
	
    char c;

    c = 'm';
    printf("%c -> %c", c, toupper(c));

    c = 'D';
    printf("\n%c -> %c", c, toupper(c));

    c = '9';
    printf("\n%c -> %c", c, toupper(c));
    return 0;
}
*/