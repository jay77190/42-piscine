/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyawilhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 22:52:33 by jyawilhi          #+#    #+#             */
/*   Updated: 2016/07/10 22:52:40 by jyawilhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factoial(int	nb)
{
	if((nb	<=	0)||(nb	>	12)
		return	(0);
	if(nb	==	1)
		return	(1);
	return(nb	*	ft_recursive_factorial(nb	-	1));
}
