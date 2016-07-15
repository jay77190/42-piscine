/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyawilhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 22:53:10 by jyawilhi          #+#    #+#             */
/*   Updated: 2016/07/10 22:53:14 by jyawilhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int	nb,int	power)
{
		if(power	<	0)
			return	(0);
		if(power	==	0)
			return	(1);
		return	(nb	*	(ft_recusive_power(nb,	power	-1)));
]
