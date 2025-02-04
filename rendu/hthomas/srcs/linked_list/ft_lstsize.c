/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:49:16 by hthomas           #+#    #+#             */
/*   Updated: 2021/12/11 13:35:35 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/linked_list.h"

/*
** Counts the number of nodes in a list
** @param lst	The beginning of the list
** @return		Length of the list
*/

int	ft_lstsize(t_list *lst)
{
	int		cpt;
	t_list	*pt;

	if (!lst)
		return (0);
	cpt = 1;
	pt = lst;
	while (pt)
	{
		pt = pt->next;
		cpt++;
	}
	return (cpt);
}
