/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozturk <oozturk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:34:25 by oozturk           #+#    #+#             */
/*   Updated: 2022/02/08 17:34:25 by oozturk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	de;
	size_t	sr;

	de = ft_strlen(dst);
	sr = ft_strlen((char *)src);
	a = 0;
	if (dstsize <= de)
		return (dstsize + sr);
	while (src[a] != '\0' && de + a + 1 < dstsize)
	{
		dst[de + a] = src[a];
		a++;
	}
	dst[de + a] = '\0';
	return (de + sr);
}
/*int	main()
{
	char test1[] = "selam";
	char test2[] = "benonur";
	printf("%lu\n",ft_strlcat(test1,test2,7));
	printf("%s",test1);
}
*/
