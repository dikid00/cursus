/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:54:08 by mabarbas          #+#    #+#             */
/*   Updated: 2022/04/23 15:54:09 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	if (dstsize < 1)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
DESCRIPTION
     The strlcpy() and strlcat() functions copy and concatenate strings with the same input parameters and output result as snprintf(3).  They are designed to be
     safer, more consistent, and less error prone replacements for the easily misused functions strncpy(3) and strncat(3).

     strlcpy() and strlcat() take the full size of the destination buffer and guarantee NUL-termination if there is room.  Note that room for the NUL should be
     included in dstsize.

     strlcpy() copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0.

	 If the src and dst strings overlap, the behavior is undefined.

RETURN VALUES
     Besides quibbles over the return type (size_t versus int) and signal handler safety (snprintf(3) is not entirely safe on some systems), the following two are
     equivalent:

           n = strlcpy(dst, src, len);
           n = snprintf(dst, len, "%s", src);

     Like snprintf(3), the strlcpy() and strlcat() functions return the total length of the string they tried to create.  For strlcpy() that means the length of
     src.  For strlcat() that means the initial length of dst plus the length of src.

     If the return value is >= dstsize, the output string has been truncated.  It is the caller's responsibility to handle this.


#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	if (dstsize < 1)//							no space
		return (ft_strlen(src));//				string it tried to create
	while (src[i] != '\0' && i < dstsize - 1)//	while string to copy doesn't terminate or there is space in dst and guaranteeing NULL termination
	{
		dst[i] = src[i];//						copy
		i++;
	}
	dst[i] = '\0';//							NULL termination
	return (ft_strlen(src));//					string it tried to create
}
*/
