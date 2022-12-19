/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaplan <@student.42kocaeli.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:20:46 by mkaplan           #+#    #+#             */
/*   Updated: 2022/11/28 14:57:33 by mkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char    *ft_strchr(const char *s, int c)
{
    size_t i;

    i = 0;
    if(!s)
        return(0);
    while(s[i] != '\0')
    {
        if(*s == (char)c)
            return((char *)s);
            i++;
            s++;
    }
    return(NULL);
}
