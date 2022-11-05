/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-bras <mle-bras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:38:16 by mle-bras          #+#    #+#             */
/*   Updated: 2022/11/05 17:38:16 by mle-bras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	len(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*new_space;
	int		len_str;
	int		i;

	len_str = len(s) + 1;
	new_space = malloc(len_str * sizeof(char));
	i = 0;
	if (new_space == NULL)
		return (NULL);
	while (s[i])
	{
		new_space[i] = s[i];
	i++;
	}
	new_space[i] = '\0';
	return (new_space);
}

/*
int main() {

    const char * original = "The original string.";

    // On duplique la chaîne de caractères initiale.
    char * copy = ft_strdup( original );

    // On passe chaque lettre en majuscule.
    char * ptr = copy;
    while( *ptr != '\0' ) {
        *ptr = toupper( *ptr );
        ptr++;
    }
    // On affiche la chaîne finale
    printf( "%s\n", copy );

    // Sans oublier de libérer l'espace mémoire au final.
    free( copy );

    return EXIT_SUCCESS;
}
*/


