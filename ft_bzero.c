/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrandria <hrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:20:30 by hrandria          #+#    #+#             */
/*   Updated: 2022/10/21 17:36:35 by hrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
	char	*new_s;
	size_t	len;

	new_s = s;
	len = ft_len(new_s);
	if (n <= len)
	{
		while (n--)
			*new_s++ = '\0';
	}
}

/*#include <unistd.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	char buffer[] = "This is a test of the bzero function";
	char buffer2[] = "This is a test of the bzero function";


	printf( "Before: %s\n", buffer );
	ft_bzero( buffer+5, '*', 10 );
	printf( "After:  %s\n", buffer );

	printf( "Before: %s\n", buffer2 );
	bzero( buffer2+5, '*', 10 );
	printf( "After:  %s\n", buffer2 );

	return (0);
}
*/