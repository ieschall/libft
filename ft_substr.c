/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieschall <ieschall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 15:47:42 by ieschall          #+#    #+#             */
/*   Updated: 2021/08/10 22:43:35 by ieschall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	slen;
	size_t	diff;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen < start)
		return (NULL);
	diff = ft_strlen(s + start);
	if (diff && diff < len)
		len = diff;
	d = (char *)malloc(sizeof(char) * (len + 1));
	if (!d)
		return (NULL);
	d[len] = EOS;
	while (len--)
		d[len] = s[start + len];
	return (d);
}
