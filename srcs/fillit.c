/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenis <adenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 22:50:09 by vmercadi          #+#    #+#             */
/*   Updated: 2017/06/06 19:32:26 by adenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_cleancube(void)
{
	int		i;

	i = 0;
	while (i < g_c.size)
	{
		ft_strdel(&g_c.c[i]);
		i++;
	}
	free(g_c.c);
}

void	ft_clean(t_lst *tmp)
{
	if (tmp->next)
		ft_clean(tmp->next);
	ft_strdel(&tmp->piece);
	free(tmp);
}

int		main(int ac, char **av)
{
	int		ok;
	int		fd;

	fd = 0;
	if (ac != 2)
	{
		ft_putendl("usage : ./fillit #FICHIER#");
		return (0);
	}
	ok = maincheck(av, fd);
	if (ok <= 0)
	{
		ft_putendl("error");
		return (0);
	}
	if (!mainres())
	{
		ft_putendl("error");
		return (0);
	}
	ft_clean(g_c.firstma);
	ft_cleancube();
	return (1);
}
