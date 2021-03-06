/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdudley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 21:10:48 by bdudley           #+#    #+#             */
/*   Updated: 2018/12/05 22:25:50 by bdudley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	while (*s2 != '\0')
		s1[i++] = *s2++;
	s1[i] = '\0';
	return (s1);
}
