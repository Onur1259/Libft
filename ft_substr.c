/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozturk <oozturk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:55:27 by oozturk           #+#    #+#             */
/*   Updated: 2022/02/10 16:55:29 by oozturk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	a;

	a = 0;
	if (!s)
		return (0);
	while (s[a] && a < len)
		a++;
	str = (char *)malloc(a + 1);
	if (!str)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
/*
int	main()
{
	char test[] = "onurben";
	printf("%s",ft_substr(test,1,3));
}
*/
