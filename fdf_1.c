/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:35:54 by dacastil          #+#    #+#             */
/*   Updated: 2025/02/15 23:13:14 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	fr_words(char **wds)
{
	int	i;

	i = 0;
	while (wds[i])
	{
		free(wds[i]);
		i++;
	}
	free(wds);
}

int	count_spaces(char *line)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (line[i])
	{
		if (line[i] == ' ')
			count++;
		i++;
	}
	return (count);
}

int	*atoi_ptr(int *ptr, char *str, int spaces, int len)
{
	int		i;
	int		*new_ptr;
	char	**wd;

	i = 0;
	new_ptr = malloc((len - spaces) * sizeof(int));
	wd = ft_split(str, ' ');
	while (str[i])
	{
		new_ptr[i] = ft_atoi(wd[i]);
		printf("num %d\n", new_ptr[i]);
		i++;
	}
	new_ptr[i] = '\0';
	return (new_ptr);
}


int	*lengs(int i, int fd)
{
	int		*len;
	int		j;
	char	*str;

	str = NULL;
	len = malloc((i + 1) * sizeof(int));
	j = 0;
	if (!len)
		return (NULL);
	fd = open("mapa_sencillo.txt", O_RDONLY);
	if (fd < 0)
		return (NULL);
	str = get_next_line(fd);
	len[j] = ft_strlen(str);
	free(str);
	j++;
	while (len != 0)
	{
		str = get_next_line(fd);
		if (str == NULL)
			break ;
		len[j] = ft_strlen(str);
		j++;
	}
	free(str);
	len[j] = 0;
	return (len);
}
