        /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyawilhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 14:43:24 by jyawilhi          #+#    #+#             */
/*   Updated: 2016/07/13 14:43:28 by jyawilhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int *range[], int min, int max)
{
	int size = max - min;
	int i = 0;

	if (size <= 0)
		return -1;
	
	*range = (int*)malloc( sizeof(int) * size );

	while(i < size)
	{
		*range[i] = i;
		i++;
	}

	return 0;
}

int main(void)
{
	int **array;
	
	ft_ultimate_range(array, 1, 10);
    for (int i = 0; i < 9; ++i)
    printf("%i\n", array[i]);
    return (0);
}
