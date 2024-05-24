/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saberton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:29:22 by saberton          #+#    #+#             */
/*   Updated: 2024/05/24 11:03:55 by saberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;

	s = NULL;
	while (*str)
	{
		if (*str == c)
		{
			s = (char *)str;
		}
		str++;
		if (*str == '\0' && s != (void *)0)
			return (s);
	}
	return (s);
}

/*#include <string.h>
#include <stdio.h>

int     main(void)
{
        char    *str = "";

        printf("%s\n", ft_strrchr(str, 97));
        printf("%s\n", strrchr(str, 97));
        return (0);
}*/
