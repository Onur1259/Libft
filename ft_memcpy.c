/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozturk <oozturk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:34:12 by oozturk           #+#    #+#             */
/*   Updated: 2022/02/22 11:12:32 by oozturk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest2;
	char	*src2;
	size_t	i;

	i = 0;
	dest2 = (char *) dest;
	src2 = (char *) src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest2);
}
/*
int	main()
{
	char test[10]= "ahmet";
	
	char *a;

	a = ft_memcpy(test + 2,test,4);
	printf("%s",test);
}
*/
// ft_memcpy >> srcden aldığı byteleri deste yapıştırır.
// strcpy'den farkı stringten farklı olarak int,float gibi bütün değişkenleri
// kopyalayabilmesi.
