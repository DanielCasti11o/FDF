/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 18:20:38 by dacastil          #+#    #+#             */
/*   Updated: 2025/02/12 20:22:59 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibx-linux/mlx.h"
#include <stdio.h>
#include "fdf.h"

int	key_hook(int keycode, t_vars *vars)
{
	printf("Hello from key_hook!\n");
	return (0);
}

int	main(void)
{
	t_vars	vars;
	t_ejes	eje;
	int		i;

	i = 0;
	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 1000, 1000, "Hello world!");
	// mlx_key_hook(vars.win, key_hook, &vars);
	while (i < EJE_X && i < EJE_Y)
	{
		mlx_pixel_put(vars.mlx, vars.win, i, i, 0xFFFF00);
		mlx_pixel_put(vars.mlx, vars.win, 1, i, 0xFFFFFF);
		i++;
	}



	mlx_loop(vars.mlx);
}
