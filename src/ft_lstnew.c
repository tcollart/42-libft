/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 02:28:01 by tcollart          #+#    #+#             */
/*   Updated: 2014/01/03 22:38:34 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	void	*new_content;

	new = (t_list *)malloc(sizeof(t_list));
	if (content == NULL && new)
	{
		new->content = NULL;
		new->content_size = 0;
		new->next = NULL;
		return (new);
	}
	new_content = ft_memalloc(content_size);
	if (content && new && new_content)
	{
		new_content = ft_memcpy(new_content, content, content_size);
		new->content = (void *)new_content;
		new->content_size = content_size;
		new->next = NULL;
	}
	else
		return (NULL);
	return (new);
}
