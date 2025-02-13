/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 17:55:43 by dacastil          #+#    #+#             */
/*   Updated: 2025/02/13 19:36:19 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	**lines;
	int		i;

	i = 0;
	fd = open("mapa_sencillo.txt", O_RDONLY);
	if (fd < 0)
		return (NULL);
	while (get_next_line(fd) != NULL)
	{
		lines[i] = get_next_line(fd);
		i++;
	}
	

}
