/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyawilhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 16:12:05 by jyawilhi          #+#    #+#             */
/*   Updated: 2016/07/14 16:12:09 by jyawilhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

typedef	struct	s_point
{
	int x;
	int y;
}				t_point;

void			set_point(t_point *point);

#endif
