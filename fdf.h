/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 17:53:02 by dacastil          #+#    #+#             */
/*   Updated: 2025/02/13 12:51:05 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# define EJE_X 1000
# define EJE_Y 1000
# define EJE_Z

# include <math.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct	s_ejes
{
	int		eje_x;
	int		eje_y;
	int		eje_z;
	void	*image;
}				t_ejes;

typedef struct	s_vars
{
	void	*mlx;
	void	*win;
}				t_vars;


#endif
