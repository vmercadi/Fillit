/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenis <adenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/08 21:04:31 by vmercadi          #+#    #+#             */
/*   Updated: 2017/06/06 19:38:01 by adenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
** Return the number of empty columns and rows
*/

int		*checkmovit(t_lst *lst)
{
	int		i;
	int		*tab;

	i = 0;
	if (!(tab = (int *)malloc(sizeof(int) * 2)))
		exit(1);
	tab[0] = 0;
	tab[1] = 0;
	while (lst->piece[i] != '#')
	{
		if (lst->piece[i] == '\n')
			tab[0]++;
		i++;
	}
	i = 0;
	while (i <= 2)
	{
		if (lst->piece[i] == '.' && lst->piece[i + 5] == '.' &&
			lst->piece[i + 10] == '.' && lst->piece[i + 15] == '.')
			tab[1] += 1;
		else
			break ;
		i++;
	}
	return (tab);
}

/*
** Because movit length
*/

void	movitbis(int i, int j, char *tmp, t_lst *lst)
{
	int *tab;

	tab = checkmovit(lst);
	if (tmp[j - 1] != '\n')
		tmp[j++] = '\n';
	while (tab[0]-- != 0)
		ft_strcat(tmp, "....\n");
	i = 0;
	while (i < 18)
		i++;
	while (tmp[i] != '.' && tmp[i] != '#')
		tmp[i--] = '.';
	ft_strcpy(lst->piece, tmp);
	free(tmp);
	free(tab);
}

/*
** Move the tetris to the next position
*/

void	movit(t_lst *lst)
{
	int		*tab;
	int		i;
	int		j;
	int		k;
	char	*tmp;

	j = 0;
	tab = checkmovit(lst);
	tmp = ft_strnew(21);
	i = 5 * tab[0];
	while (lst->piece[i])
	{
		if (i % 5 == 0)
			i += tab[1];
		else if (lst->piece[i] == '\n')
		{
			k = 0;
			while (k++ < tab[1])
				tmp[j++] = '.';
			tmp[j] = '\n';
		}
		tmp[j++] = lst->piece[i++];
	}
	movitbis(i, j, tmp, lst);
	free(tab);
}
