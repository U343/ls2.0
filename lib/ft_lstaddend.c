/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoss <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 22:14:41 by mjoss             #+#    #+#             */
/*   Updated: 2019/12/04 19:53:19 by mjoss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddend(t_list **alst, t_list *new)
{
	if (*alst == NULL)
		*alst = new;
	else
		if ((*alst)->next == NULL)
			(*alst)->next = new;
		else
			ft_lstaddend(&(*alst)->next, new);
}
