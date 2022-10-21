/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrandria <hrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:21:26 by hrandria          #+#    #+#             */
/*   Updated: 2022/10/21 17:14:37 by hrandria         ###   ########.fr       */
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

void	*ft_memset(void *ptr, int c, size_t count)
{
	char	*new_ptr;
	size_t	len;

	new_ptr = ptr;
	len = ft_len(new_ptr);
	if (count <= len)
	{
		while (count--)
			*new_ptr++ = c;
	}
	return (new_ptr);
}

/*#include <unistd.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	char buffer[] = "This is a test of the memset function";
	char buffer2[] = "This is a test of the memset function";


	printf( "Before: %s\n", buffer );
	ft_memset( buffer+5, '*', 10 );
	printf( "After:  %s\n", buffer );

	printf( "Before: %s\n", buffer2 );
	memset( buffer2+5, '*', 10 );
	printf( "After:  %s\n", buffer2 );

	return (0);
}
*/