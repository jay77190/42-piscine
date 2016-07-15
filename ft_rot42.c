/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyawilhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 22:13:57 by jyawilhi          #+#    #+#             */
/*   Updated: 2016/07/14 22:31:41 by jyawilhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	rotate_maj(char c)
{
	c = c - 65;
	c = ((c + 42) % 26);
	c = c + 65;
	return (c);
}

char	rotate_min(char c)
{
	c = c - 97;
	c = ((c + 42) % 26);
	c = c + 97;
	return (c);
}

char	rotate(char c)
{
	if (c >= 65 && c <= 90)
		return (rotate_maj(c));
	else if (c >= 97 && c <= 122)
		return (rotate_min(c));
	else
		return (c);
}

char	*ft_rot42(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = rotate(str[i]);
		i++;
	}
	return (str);
}

int	main()
{
  char	tab[] = "sebastien";
  printf("%s", ft_rot42(tab));
    return(0);
}


