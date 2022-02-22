/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozturk <oozturk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:34:06 by oozturk           #+#    #+#             */
/*   Updated: 2022/02/08 17:34:06 by oozturk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char) str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
/*
Program memchr() fonksiyonu ile bir karakter dizisi içinde
'm' karakterini arar.
nesnenin ilk boyut baytı içindeki ilk c
 (bir unsigned char'a dönüştürülmüş) baytını bulur.
 Dönen değer baytın konumunu içeren bir göstericidir.
 c baytı bulunamazsa bir boş gösterici döner.

*/
/*
int main()
{
    const char *str = "armut";
    printf("%s", ft_memchr(str, 'm', 3));
    printf("\n%s", memchr(str, 'm', 3));
}
*/
