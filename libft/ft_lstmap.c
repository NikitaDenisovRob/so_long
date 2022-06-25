/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:59:09 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 13:59:10 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*nw;

	if (!lst || !f)
		return (NULL);
	res = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst)
	{
		nw = ft_lstnew(f(lst->content));
		if (!nw)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, nw);
		lst = lst->next;
	}
	return (res);
}
