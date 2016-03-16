/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrenier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 17:07:56 by vgrenier          #+#    #+#             */
/*   Updated: 2016/02/04 19:04:00 by vgrenier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_realloc(char *str, int len)
{
	char *tmp;

	if ((tmp = ft_strnew(len)))
	{
		ft_strcpy(tmp, str);
		tmp[ft_strlen(str)] = '\0';
		free(str);
		str = tmp;
		return ((void *)str);
	}
	return (NULL);
}
